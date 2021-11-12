/*
https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
*/

//Solution 1: Recursion
class Solution
{
public:
	//Function to return max value that can be put in knapsack of capacity W.
	int knapSack(int W, int wt[], int val[], int n)
	{
		// Your code here
		//base case
		if (n == 0 || W == 0)
			return 0;

		if (wt[n - 1] <= W) {
			return max(val[n - 1] + knapSack(W - wt[n - 1] , wt, val, n - 1) , knapSack(W, wt, val, n - 1));
		}
		else
			return knapSack(W, wt, val, n - 1);
	}
};

//Solution 2: Top Down DP
class Solution
{
	int knapsack(int W, int wt[], int val[], int n , vector<vector<int>>& dp) {
		if (n == 0 || W == 0)
			return 0;

		if (dp[W][n] != -1)
			return dp[W][n];

		if (wt[n - 1] <= W) {
			return dp[W][n] = max(val[n - 1] + knapsack(W - wt[n - 1] , wt, val, n - 1, dp) , knapsack(W, wt, val, n - 1, dp));
		}
		else
			return dp[W][n] = knapsack(W, wt, val, n - 1, dp);
	}
public:
	//Function to return max value that can be put in knapsack of capacity W.
	int knapSack(int W, int wt[], int val[], int n)
	{
		// Your code here
		vector<vector<int>> dp(W + 1 , vector<int>(n + 1, -1));
		knapsack(W, wt, val, n, dp);

		return dp[W][n];
	}
};

//Solution 3: Bottom Up
int knapSack(int W, int wt[], int val[], int n)
{
	// Your code here
	vector<vector<int>> dp(W + 1 , vector<int>(n + 1, -1));
	for (int i = 0; i <= W; i++) {
		for (int j = 0; j <= n; j++) {

			if (i == 0 || j == 0)
				dp[i][j] = 0;

			else if (wt[j - 1] <= i)
				dp[i][j] = max(val[j - 1] + dp[i - wt[j - 1]][j - 1] , dp[i][j - 1]);

			else
				dp[i][j] = dp[i][j - 1];
		}
	}

	return dp[W][n];
}