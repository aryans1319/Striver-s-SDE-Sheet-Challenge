// dfs approach

void preOrder(TreeNode *root, vector<int>&ans){
    if(root == NULL) return;
    ans.push_back(root->data);
    preOrder(root->left,ans);
    preOrder(root->right,ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int>ans;
    preOrder(root,ans);
    return ans;
}

// bfs approach

vector<int> getPreOrderTraversal(TreeNode *root)
{
    stack<TreeNode *> st;
    vector<int>ans;
    if(root == NULL){
        return ans;
    }
    st.push(root);
   
    while(!st.empty()){
        TreeNode *curr = st.top();
        ans.push_back(curr->data);
        st.pop();
        if(curr->right != NULL){
            st.push(curr->right);
        }
         if(curr->left != NULL){
            st.push(curr->left);
        }
    }
    return ans;
}
