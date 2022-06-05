// DFS Approach

void postOrder(TreeNode *root, vector<int>&ans)
{
    if(root == NULL) return;
    postOrder(root->left,ans);
    postOrder(root->right,ans);
    ans.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int>ans;
    postOrder(root,ans);
    return ans;
}

//BFS Approach

