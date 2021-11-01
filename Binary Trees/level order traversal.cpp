vector<vector<int>> levelOrder(TreeNode* root) {
	vector<vector<int>> ans;
	queue<TreeNode*> q;

	if (root == NULL)
		return ans;

	q.push(root);

	while (!q.empty()) {
		vector<int> level;

		int s = q.size();
		while (s--) {
			TreeNode* node = q.front();
			q.pop();

			if (node->left)
				q.push(node->left);

			if (node->right)
				q.push(node->right);

			level.push_back(node->val);
		}
		ans.push_back(level);

	}
	return ans;

}




{ {8} , {5, 4} , {9, 7, 11} , {1, 12, 3} , {2}}


q: 1 12 3

O / P: 8 5 4 9 7 11