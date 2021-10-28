int partition(int a[] , int s , int e) {

	int i = s - 1; //smaller part
	int j = s;

	int pivot = a[e];

	for (; j <= e; j++) {
		if (a[j] <= pivot) {
			i = i + 1;
			swap(a[i] , a[j]);
		}
	}

	swap(a[i + 1] , a[e]);
	return i + 1;
}



void quickSort(int a[] , int s , int e) {

	//base case
	if (s >= e)
		return;

	int p = partition(a, s, e);
	quickSort(a, s, p - 1);
	quickSort(a, p + 1, s);
}