//1. BUBBLE SORT

void bubbleSort(int arr[]  , int n) {

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= n - i - 1; j++) {
			if (a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

//TC: O(n^2)


//2. SELECTION SORT

void selectionSort(int arr[] , int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[min_index])
				min_index = j;
		}
		swap(a[i] , a[min_index]);
	}
}


//3. INSERTION SORT

void insertionSort(int a[] , int n) {

	for (int i = 1; i < n; i++) {
		int element = a[i];

		int j = i - 1;
		while (j >= 0 and a[j] > element) {
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = element;
	}
}

/*
Time Complexity :
wosrt and average case - O(n^2)
Best case: O(n)   1 2 3 4 5
*/


sort(arr, arr + n) //O(nlogn)
