//Maximum in a tree

int maximumInTree(TreeNode* root) {

	//base case
	if (root == NULL)
		return INT_MIN;


	int leftMax = maximumInTree(root->left);
	int rightMax = maximumInTree(root->right);

	return max(root->val , max(leftMax , rightMax));
}


//Minimum in a tree
int minimumInTree(TreeNode* root) {

	//base case
	if (root == NULL)
		return INT_MAX;


	int leftMin = maximumInTree(root->left);
	int rightMin = maximumInTree(root->right);

	return min(root->val , min(leftMax , rightMax));
}