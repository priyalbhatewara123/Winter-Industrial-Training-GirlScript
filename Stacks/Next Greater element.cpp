/*
Problem link:
https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1
*/

vector<long long> nextLargerElement(vector<long long> arr, int n) {

	stack<long long> stk;
	vector<long long> ans(n, -1);

	for (int i = 0; i < n; i++) {

		while (!stk.empty() and arr[i] > arr[stk.top()]) {
			ans[st.top()] = arr[i];
			stk.pop();
		}

		stk.push(i);

	}
	return ans;
}

