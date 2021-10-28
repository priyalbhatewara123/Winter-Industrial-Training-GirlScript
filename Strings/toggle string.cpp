/*

Toggle string

Input : "aBCd"
Output: "AbcD"

*/
#include<bits/stdc++.h>
using namespace std;

void toggleString(string s) {

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	toggleString(s);
	return 0;
}

/*

Check for Palindrome ??


*/

bool isPalindrome(string s) {
	int i = 0;
	int j = s.length() - 1;

	while (i < j) {
		if (s[i] != s[j])
			return false;

		i++;
		j--;
	}
	return true;
}

/*

1. Substring
2. Subsequence

"abc"

substring -> continues part of string
a
b
c
ab
bc
abc

Subsequence -> can be non continuous
ac


*/

/*

Check if a string is subsequence of a string or no ?

Eg: I/p :  a = adcxz , b = acz    o/p: True
b = azc  op: false
b = xyz  op: false

*/

bool isSubsequence(string a , string b) {
	int i = 0;  //for iterating a
	int j = 0; //for iterating b

	while (i < a.length() and j < b.length()) {
		if (a[i] == b[j]) {
			i++;
			j++;
		}
		else
			i++;
	}

	if (j == b.length())
		return true;

	return false;
}