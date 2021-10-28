/*

Print frequencies of characters in sorted order in a string of lower case alphabets.

I/P : "abcaaxcczb"

O/P:

a 3
b 2
c 3
x 1
z 1

*/

#include<bits/stdc++.h>
using namespace std;

void printFreq(string s)
{
	int count[26] = {0};
	for (int i = 0; i < s.length(); i++) {
		count[s[i] - 'a']++;               //s[i] = a   s[i] - 'a' -> 97 - 97 = 0
	}

	for (int i = 0; i < 26; i++) {
		if (count[i] > 0) {
			cout << (char)(i + 'a') << " " << count[i] << endl;
		}
	}

}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	printFreq(s);
	return 0;
}