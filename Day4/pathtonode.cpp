/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool getPath(TreeNode *root, vector<int>&a, int x){
    if(!root){
        return false;
    }
    a.push_back(root->val);
    if(root->val == x){
        return true;
    }
    if(getPath(root->left,a,x) || getPath(root->right,a,x)){
        return true;
    }
    a.pop_back();
    return false;
}
vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> a;
    if(A == NULL){
        return a;
    }
    getPath(A,a,B);
    return a;
}
