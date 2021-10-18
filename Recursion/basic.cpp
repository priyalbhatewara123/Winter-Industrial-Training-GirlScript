//	RECURSION - a function calling itself

//Sum from 1-n

//Iterative approach
for (int i = 1; i <= n; i++) {
	sum += i;
}


//Recursive solution
/*
1.  Base case : cond where recursion will end
2. Recursive expression

*/
int sum(int n) {
	//base case
	if (n == 0)
		return 0;

	return n + sum(n - 1); //recursive statement

}



//fibonacci series -  0,1,1,2,3,5,8 ....

int fibonacci(int n) {

	//base case
	if (n <= 1)
		return n;

	return fibonacci(n - 1) + fibonacci(n - 2);
}
