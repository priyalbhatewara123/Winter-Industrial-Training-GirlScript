/*
Find trailing zeros in factorial of a number.
n = 5 , 120 -> output = 1
n = 10 , 3628800 -> 2
*/


1 * 2 * 3 * 4 * 5 ...... * n

int trailingZeros(int n) {
	int count = 0;

	for (int i = 5; i <= n; i = i * 5) {
		count += (n / i);
	}

	return count;
}


/*
n = 100

i = 5;

n/i = 20 (5,10,20,25....100) single 5

i = 25
n/i = 4  (25,50,75,100, 125)  double 5

i=125

*/