/*
arr[] = {1,2,3,4,5}
D = 3

	2,3,4,5,1
	3,4,5,1,2
o/p :4,5,1,2,3

*/


1 2 3 4 5
D = 3

    1. reverse(arr, 0, d - 1)  3 2 1 4 5
    2. reverse(arr, d, n - 1) 3 2 1 5 4
    3. reverse(arr, 0, n - 1) 4 5 1 2 3

//Time com: O(n)
//Space com: O(1)