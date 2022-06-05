https://takeuforward.org/data-structure/inorder-traversal-of-binary-tree/

/* DFS Approach */

void inorderTraversal(TreeNode *root,vector<int>&ans){
    if(root == NULL) return ;
    inorderTraversal(root->left,ans);
    ans.push_back(root->data);
    inorderTraversal(root->right,ans);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int>ans;
    inorderTraversal(root,ans);
    return ans;
}
