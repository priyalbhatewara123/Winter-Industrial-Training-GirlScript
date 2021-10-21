/*
Check if n is prime or not?
*/


//Solution 1: O(n)
bool isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

//Solution 2 : O(sqrt(n))

16
1 * 16
2 * 8
4 * 4
8 * 2
16 * 1

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}


//Solution 3: Most efficient approach
bool isPrime(int n)
{
	if (n == 1)
		return false;

	if (n == 2 || n == 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i < n; i = i + 6) {
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}

	return true;
}

/*
n = 20
5 7 11 13 17 19  23 25 (6 * k + / - 1)
*/
