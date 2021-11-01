bool isPresent(TreeNode* root , int d) {

	if (root == NULL)
		return false;

	if (root ->data == d)
		return true;

	if (isPresent(root->left , d))
		return true;

	return isPresent(root->right , d);

}