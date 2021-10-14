/*

Check for anagram ?

s1 = "listen"    s2 = "silent"   True
s1 = "list"      s2 = "siit"   False

*/


//Approach 1: Using sorting

bool isAnagram(string a , string b) {

	sort(a.begin() , a.end());
	sort(b.begin() , b.end());

	return a == b;
}


//TC: O(nlogn)  SC: O(1)


//Approach 2: Using extra space

bool isAnagram(string a , string b) {
	if (a.length() != b.length())
		return false;

	int count[26] = {0};

	for (int i = 0; i < a.length(); i++) {
		count[a[i] - 'a']++;
		count[b[i] - 'a']--;
	}

	for (int i = 0; i < 26; i++) {
		if (count[i] != 0)
			return false;
	}
	return true;
}

//TC: O(n + 26) = O(n)
//SC: O(26)
