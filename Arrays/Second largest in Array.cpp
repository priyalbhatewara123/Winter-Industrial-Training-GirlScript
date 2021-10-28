//Find second largest element in an Array.

#include<bits/stdc++.h>
using namespace std;


//Approach - 1
//Requires 2 traversals of the array
int firstLargest(int arr[], int n)
{
	int largest = arr[0];
	for (int i = 1; i < n; i++)
		largest = max(arr[i] , largest);

	return largest;
}

void secondLargest(int arr[] , int n)
{
	int firstLar = firstLargest(arr, n);
	int secondLar = INT_MIN;

	for (int i = 0; i < n; i++) {
		if (arr[i] != firstLar) {
			secondLar = max(secondLar , arr[i]);
		}
	}

	if (secondLar == INT_MIN)
		cout << "Not Present";
	else
		cout << secondLar;
}


//Approach 2
void secondLargest2(int arr[] , int n)
{
	int res = -1;  //res store index of second largest
	int largest = 0; //index of largest element

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[largest]) {
			res = largest;
			largest = i;
		}

		else if (arr[i] < arr[largest]) {
			if (res == -1 or arr[i] > arr[res])
				res = i;
		}
	}
	if (res == -1)
		cout << "Not Present";
	else
		cout << arr[res];
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	secondLargest2(arr , n);

	return 0;
}