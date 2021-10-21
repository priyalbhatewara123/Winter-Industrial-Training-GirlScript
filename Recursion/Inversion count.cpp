/*

INVERSION COUNT:
count no of pairs such that a[i] > a[j] where i<j.

IP: [1,5,9,2,0] op: 6
[1,0] , [5,0] , [9,0] , [2,0] , [5,2] , [9,2]

*/

//Brute force approach
//Time complexity : O(n^2)
int inversionCount(int arr[] , int n) {

	int count = 0;

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j])
				count++;
		}
	}
	return count;
}

//Merge sort
int merge(int a[] , int s , int e) {
	int count = 0;
	int mid = (s + e) / 2;

	int temp[100];
	int i = s; //traverse first subarray
	int j = mid + 1; //traverse second subarray
	int k = s; //track of temp array

	while (i <= mid and j <= e) {
		if (a[i] < a[j]) {
			temp[k] = a[i];
			k++;
			i++;
		}
		else {
			count += (mid - i + 1);
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid) {
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <= e) {
		temp[k] = a[j];
		k++;
		j++;
	}

	//copy back elements from temp to a
	for (int i = s; i <= e; i++) {
		a[i] = temp[i];
	}

	return count;
}



int mergeSort(int a[] , int s , int e) {

	//base case
	if (s >= e) {
		return 0;
	}

	int mid = (s + e) / 2;

	//self inversions
	int x = mergeSort(a, s, mid);
	int y = mergeSort(a, mid + 1, e);

	//cross inversions
	int z = merge(a, s, e);

	return x + y + z;
}
