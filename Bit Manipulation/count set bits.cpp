/*
Count number of set bits in an integer.
*/

int noOfSetBits(int n) {
	int ans = 0;
	while (n > 0) {
		n = n & (n - 1);
		ans++;
	}
	return ans;
}


//Tc: O(ans) ans = set bits

/*
n = 40     101000
n = 39     100111

n&(n-1) = 32 100000
          31 011111

          n = 0


//inbuilt function
__builtin_popcount(n)

*/