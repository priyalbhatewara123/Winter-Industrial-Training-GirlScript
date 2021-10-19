void merge(int a[] , int s , int e) {
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
}



void mergeSort(int a[] , int s , int e) {

	//base case
	if (s >= e) {
		return;
	}

	int mid = (s + e) / 2;
	mergeSort(a, s, mid);
	mergeSort(a, mid + 1, e);

	merge(a, s, e);
}


/*

TC: O(logn) * O(n) -> O(nlogn)
SC: O(n)

*/