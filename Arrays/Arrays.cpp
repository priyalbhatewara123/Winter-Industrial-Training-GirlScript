/*
Find sum of n natural numbers


Solution 1:

for (int i = 1; i <= n; i++) {
	sum += i;
}

Time Complexity : O(n)
Space Complexity: O(1)


Solution 2:

sum = n * (n + 1) / 2;

Time Complexity : O(1)
Space Complexity: O(1)


Best case , Worst case and average Case

	int arr[] = {10, 20, 30, 40, 50}
	            int x = 20

	int find(int arr[] , int n , int x) {
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] == x)
			return i;
	}
	return -1;
}

Best case: first index has our element i = 0 , omega(1)
        Wosrt Case: i = n - 1 , O(n)
                        Average case: middle , theta(n)


for (int i = 0 ; i < n ; i = i + c)
{
	//constent work
}

Time com ?

O(n / c) = O(n)

           for (int i = 1 ; i < n ; i = i*c)
{
	//constent work
}

1 , c , c*c , c*c*c .....

k iterations in total
c ^ 0 , c ^ 1 , c ^ 2 ....... c^(k - 1)

c^k >= n
klogc >= logn   (log(a^b) = bloga)
k >= logn / log c
k >= log n

TC: O(logn)

for (int i = n ; i > 1 ; i = i / c)
{
	//constent work
}


n / c ^ 0 , n / c , n / (c ^ 2) , ........ n / (c ^ k - 1)

n / c^k < 1
n < c^k
logn < klogc
k > logn / logc
k > log n

tc: O(logn)


for (int i = 0; i < n; i++)
{
	for (int j = 0; j < m; j++)
	{
		//constent work
	}
}

O(nm)

*/

//Arrays

//1. Array of integers

#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[10];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	//printing the array - O(N)
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;
	//print element at an index - O(1)
	cout << arr[3] << endl;

	//insert 3 at index 2
//index ->	0 1 2 3 4
//element->	1 2 4 5 6

	int index = 2;
	int n = 5;
	for (int i = n - 1; i >= index; i--) {
		arr[i + 1] = arr[i];
	}

	arr[index] = 3;

	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}

	//Detele from array


	return 0;

}
