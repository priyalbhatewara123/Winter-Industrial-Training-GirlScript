/*
Check if Kth bit is set or not from right.

n = 5
k = 2

false
101
*/

bool isSet(int n, int k) {

	n = n >> (k - 1);

	return n & 1;
}

