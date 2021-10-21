/*
Find HCF and LCM Of 2 numbers?


a = 20 , b = 12

a/b

b = a%b = 8 = 4 = 0
a = b = 12 = 8 = 4
*/

int gcd (int a , int b) {

	//base case
	if (b == 0)
		return a;

	return gcd(b , a % b);
}

//a*b = lcm*hcf

//LCM = (a*b) / hcf;