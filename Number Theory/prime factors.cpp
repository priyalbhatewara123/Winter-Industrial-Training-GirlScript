/*

Print prime factors of a number.

I/P:  N = 12
O/P: 	2 , 2 , 3

*/

void primeFactors(int n) {
	if (n == 1)
		return;

	while (n % 2 == 0) {
		cout << 2 << " ";
		n = n / 2;
	}

	while (n % 3 == 0) {
		cout << 3 << " ";
		n = n / 3;
	}

	for (int i = 5; i <= sqrt(n) ; i = i + 6) {
		while (n % i == 0) {
			cout << i << " ";
			n = n / i;
		}

		while (n % (i + 2) == 0) {
			cout << (i + 2) << " ";
			n = n / (i + 2);
		}
	}

	if (n > 3)
		cout << n;
}


//All prime numbers are of form 6K +/- 1 except 2 and 3.