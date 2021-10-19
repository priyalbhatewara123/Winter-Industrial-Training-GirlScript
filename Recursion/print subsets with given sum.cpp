/*
Print all subsets with given sum.

I/P: [10,5,2,3,6,8]
sum = 8

O/p: [5,3] , [2,6] , [8]
*/

void allSets( int arr[] , int n , vetor<int> v , int sum) {

	//base case
	if (sum == 0) {
		//print subset
		for (int i = 0; i < v.length(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;
		return;
	}

	if (n == 0)
		return;

	//Choice 1: not include current element
	allSets(arr, n - 1, v, sum);

	//Choice 2: include current element
	v.push_back(arr[n - 1]);
	allSets(arr, n - 1, v, sum - arr[n - 1]);
}