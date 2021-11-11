/*
https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1
*/

//1. Recursion
int maxSum(int arr[] , int n , int i = 0) {
	if (i >= n)
		return 0;

	if (i == n - 1)
		return arr[i];

	return max((arr[i] + maxSum(arr, n, i + 2)) , maxSum(arr, n, i + 1));
}
public:
//Function to find the maximum money the thief can get.
int FindMaxSum(int arr[], int n)
{
	// Your code here
	return maxSum(arr, n);
}

//2. Recursion + Memoization
int maxSum(int arr[] , int n , int i, vector<int>& dp) {
	if (i >= n)
		return 0;

	if (i == n - 1)
		return arr[i];

	if (dp[i] != -1)
		return dp[i];

	return dp[i] = max((arr[i] + maxSum(arr, n, i + 2, dp)) , maxSum(arr, n, i + 1, dp));
}
public:
//Function to find the maximum money the thief can get.
int FindMaxSum(int arr[], int n)
{
	// Your code here
	vector<int> dp(n, -1);
	return maxSum(arr, n, 0, dp);
}


//3. Most efficient solution
int FindMaxSum(int arr[], int n)
{
	// Your code here
	int include = arr[0];
	int exclude = 0;

	for (int i = 1; i < n; i++) {
		int newInclude = arr[i] + exclude;
		exclude = max(include , exclude); //not loot current house
		include = newInclude; //loot current house
	}

	return max(include , exclude);
}