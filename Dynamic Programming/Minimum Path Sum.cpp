/*
https://leetcode.com/problems/minimum-path-sum/
*/


//Solution 1: Recursion
class Solution {
	int minSum(vector<vector<int>>& grid , int i , int j) {
		if (i < 0 || j < 0)
			return INT_MAX;

		if (i == 0 && j == 0)
			return grid[i][j];

		return grid[i][j] + min(minSum(grid , i - 1, j) , minSum(grid, i, j - 1));
	}
public:
	int minPathSum(vector<vector<int>>& grid) {
		int n = grid.size();
		int m = grid[0].size();
		return minSum(grid, n - 1, m - 1);
	}
};

//Solution 2: Top Down Dp
class Solution {
	int minSum(vector<vector<int>>& grid , int i , int j , vector<vector<int>>& dp) {
		if (i < 0 || j < 0)
			return INT_MAX;

		if (i == 0 && j == 0)
			return grid[i][j];

		if (dp[i][j] != -1)
			return dp[i][j];

		return dp[i][j] = grid[i][j] + min(minSum(grid , i - 1, j, dp) , minSum(grid, i, j - 1, dp));
	}

public:
	int minPathSum(vector<vector<int>>& grid) {
		int n = grid.size();
		int m = grid[0].size();
		vector<vector<int>> dp(n , vector<int>(m , -1));
		return minSum(grid, n - 1, m - 1, dp);
	}
};

//Solution 3: Bottom UP
int minPathSum(vector<vector<int>>& grid) {
	int n = grid.size();
	int m = grid[0].size();
	vector<vector<int>> dp(n , vector<int>(m , -1));

	//initialise first row
	dp[0][0] = grid[0][0];
	for (int i = 1; i < m; i++)
		dp[0][i] = grid[0][i] + dp[0][i - 1];

	//initialise first col
	for (int i = 1; i < n; i++)
		dp[i][0] = grid[i][0] + dp[i - 1][0];

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			dp[i][j] = grid[i][j] + min(dp[i - 1][j] , dp[i][j - 1]);
		}
	}

	return dp[n - 1][m - 1];
}