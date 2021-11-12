/*
https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
*/

class Solution {
public:
	int cutRod(int price[], int n) {
		//code here
		vector<vector<int>> dp(n + 1 , vector<int>(n + 1, -1));
		//outer loop for n
		//inner loop for size of prize array
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {

				if (i == 0 || j == 0)
					dp[i][j] = 0;

				else if (j <= i)
					dp[i][j] = max(price[j - 1] + dp[i - j][j] , dp[i][j - 1]);

				else
					dp[i][j] = dp[i][j - 1];
			}
		}

		return dp[n][n];
	}
};