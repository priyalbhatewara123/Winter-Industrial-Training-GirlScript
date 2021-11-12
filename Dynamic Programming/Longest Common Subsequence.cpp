/*
https://leetcode.com/problems/longest-common-subsequence/
*/

// Solution 1 : Recursion
class Solution {
	int lcs(string& text1 , string& text2 , int n , int m) {
		//base case
		if (n == 0 || m == 0)
			return 0;

		if (text1[n - 1] == text2[m - 1])
			return 1 + lcs(text1 , text2 , n - 1, m - 1);

		else
			return max(lcs(text1, text2, n, m - 1) , lcs(text1, text2, n - 1, m));
	}
public:
	int longestCommonSubsequence(string text1, string text2) {
		int n = text1.length();
		int m = text2.length();


		return lcs(text1 , text2, n, m);
	}
};

//Solution 2: Top Down DP
class Solution {
	int lcs(string& text1 , string& text2 , int n , int m , vector<vector<int>>& dp) {
		//base case
		if (n == 0 || m == 0)
			return 0;

		if (dp[n][m] != -1)
			return dp[n][m];

		if (text1[n - 1] == text2[m - 1])
			return dp[n][m] = 1 + lcs(text1 , text2 , n - 1, m - 1, dp);

		else
			return dp[n][m] = max(lcs(text1, text2, n, m - 1, dp) , lcs(text1, text2, n - 1, m, dp));
	}
public:
	int longestCommonSubsequence(string text1, string text2) {
		int n = text1.length();
		int m = text2.length();

		vector<vector<int>> dp(n + 1 , vector<int>(m + 1, -1));

		return lcs(text1 , text2, n, m, dp);
	}
};


//Solution 3: Bottom Up
int longestCommonSubsequence(string text1, string text2) {
	int n = text1.length();
	int m = text2.length();

	vector<vector<int>> dp(n + 1 , vector<int>(m + 1, -1));

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {

			if (i == 0 || j == 0)
				dp[i][j] = 0;

			else if (text1[i - 1] == text2[j - 1])
				dp[i][j] = 1 + dp[i - 1][j - 1];

			else
				dp[i][j] = max(dp[i - 1][j] , dp[i][j - 1]);
		}
	}

	return dp[n][m];
}