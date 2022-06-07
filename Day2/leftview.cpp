/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void getLeftView(TreeNode<int>*node,vector<int>&ans,int level){
    if(node == NULL) return;
    if(level == ans.size()) {
        ans.push_back(node->data);
    } 
    getLeftView(node->left,ans,level+1);
    getLeftView(node->right,ans,level+1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    int level = 0;
    getLeftView(root,ans,level);
    return ans;
}
