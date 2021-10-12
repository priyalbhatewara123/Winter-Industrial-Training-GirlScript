/*
Search algorithms

1. Linear Search
2. Binary Search - array should always be sorted

arr[] = {10,20,30,0,50}
x = 30

*/

int linearSearch(int arr[] , int n , int x) {

	for (int i = 0; i < n; i++) {
		if (arr[i] == x)
			return i;
	}

	return -1;
}

//Time COM : O(n)


int binarySearch(int arr[] , int n , int x) {

	int left = 0;
	int right = n - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (arr[mid] == x) {
			return mid;
		}

		else if (arr[mid] > x) {
			right = mid - 1;
		}

		else {
			left = mid + 1;
		}
	}
}

//TC: log(n)

// n , n/2 , n/4 , n/8 ......


/*
Example:
1 2 3 4 5 6 7 8 9

left = 7
right = 8

x = 8

mid = 7

arr[mid] = 8

*/