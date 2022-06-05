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


/* BFS Approach */

vector<int> getInOrderTraversal(TreeNode *root)
{
    stack<TreeNode *> st;
    vector<int>ans;
    while(true){
    if(root!= NULL){
        st.push(root);
        root = root->left;
    }
    else{
        if(st.empty()) break;
        root = st.top();
        ans.push_back(root->data);
        st.pop();
        root = root->right;
    }
    }
    return ans;
}
