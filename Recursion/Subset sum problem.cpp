/*
Count number of subsets with given sum

i/p : [10,5,2,3,6]
k = 8

[5,3]
[2,6]

O/P : 2
*/

int countSubsets(int arr[] , int n , int sum) {

	//base cond
	if (n == 0) {
		if (sum == 0) {
			return 1;
		}
		else
			return 0;
	}

	return countSubsets(arr , n - 1 , sum - arr[n - 1]) + countSubsets(arr , n - 1 , sum);
}