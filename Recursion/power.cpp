//Calculate a^n


//Solution 1:  tc: O(n)
// int power(int a , int n) {

// 	//base case
// 	if (n == 0)
// 		return 1;

// 	return a * power(a, n - 1);
// }


//Solution 2: O(logn)

int power(int a , int n) {

	//base case
	if (n == 0)
		return 1;

	int temp = power(a, n / 2);

	if (n % 2 == 0) {
		return temp * temp;
	}
	else
		return temp * temp * a;
}



/*


power(2,4)  -> power(2,2)  -> power(2,1)  -> power(2,0)
16				<- 4			<- 2			   <- 1
*/
//3^8 -> 3^4 * 3^4  //n is even

//3^9 ->  3^4 * 3^4 * 3      //n is odd


int main() {

	cout << power(2, 8);
}