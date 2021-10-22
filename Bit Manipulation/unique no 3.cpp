/*
Problem Statement:
Given an array, all numbers are present thrice except for one. Find that unique no.

2 - 010
2 - 010
3 - 011
5 - 101
3 - 011
2 - 010
3 - 011

Ans-> 101
*/

int func(int arr[] , int n) {
	int count[64] = {0};

	for (int i = 0; i < n; i++) {
		int num = arr[i];
		int j = 0;

		while (num > 0) {
			count[j] += (num & 1);
			j++;
			num = num >> 1;
		}
	}

	int ans = 0;
	int p = 0;
	for (int i = 0; i < 64; i++) {
		if (count[i] % 3 == 1) {
			ans += pow(2, p);
		}
		p++;
	}

	return ans;
}

//10011 -> 2^0 + 2^1 + 2^4

//TC: O(64n + 64) -> O(n)
//SC: O(64)