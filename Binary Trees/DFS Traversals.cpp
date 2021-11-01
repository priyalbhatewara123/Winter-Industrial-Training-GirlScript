void preorder(TreeNode* root) {

	if (root == NULL)
		return;

	cout << root -> data << " ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(TreeNode* root) {
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root -> data << " ";
	inorder(root->right);
}

void postorder(TreeNode* root) {
	if (root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

Time Complexity: O(n) where n is number of nodes
Space Complexity: O(n)