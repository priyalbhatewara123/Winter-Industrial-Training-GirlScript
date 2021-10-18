/*

Generate all subsets/subsequence for a given string ?

I/P : "ABC"
O/P:

" "
"A"
"B"
"C"
"AB"
"AC"
"BC"
"ABC"

subsets : 2^n - 1

*/

void subsets(string s , string output = ""  , int i = 0) {

	//base case
	if (i == s.length()) {
		cout << output << endl;
		return;
	}

	//choice 1 : include current character in output string
	subsets(s , output + s[i] , i + 1);

	//choice 2 : not include
	subsets(s , output , i + 1);
}
