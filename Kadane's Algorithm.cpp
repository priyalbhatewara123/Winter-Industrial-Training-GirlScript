/*
Given an integer array nums, find the contiguous subarray (containing at least one number)
which has the largest sum and return its sum.

A subarray is a contiguous part of an array.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/

//INT_MIN & INT_MAX

int maxSubarraySum(int a[] , int n)
{
	int maxSum = INT_MIN;  //max sum till now
	int currentSum = 0; //sum including current element

	for (int i = 0; i < n; i++) {
		currentSum += a[i];

		maxSum = max(maxSum , currentSum);

		if (currentSum < 0) {
			currentSum = 0;
		}
	}

	return maxSum;
}

/*
[-2,1,-3,4,-1,2,1,-5,4]
ms = INT_MIN
cs = 0

i = 0
cs = 0
ms = -2

i = 1
cs = 1
ms = 1

i = 2
cs = 0
ms = 1
..

*/

//Time complexity : O(n)

/*
arr = {-1,-2,-3,-4}

ms = INT_MIN
cs = 0

i = 0
cs = 0
ms = max(INT_MIN,-1)
ms = -1


i = 1
cs = 0
ms = max(-1,-2)
ms = -1


*/
