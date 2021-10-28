#include<bits/stdc++.h>
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;

	//input string
	getline(cin , s);
	cout << s << endl;
	/*
	s.push_back('a');

	cout << s << endl;

	//s.pop_back();
	cout << s.length();

	reverse(s.begin(),s.end());

	for(auto it = s.begin();it!= s.end();it++){
		cout << *it;
	}
	*/

	cout << s.at(6) << endl;

	s.append(" Welcome");

	cout << s << endl;

	cout << s.substr(8, 2) << endl;
	return 0;


}
