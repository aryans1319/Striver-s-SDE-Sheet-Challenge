
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        if(root == NULL) return ans;
        
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        
        q.push({root,0});
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node *currentNode = it.first;
            int horizontalDistance = it.second;
            
            if(mp.find(horizontalDistance)==mp.end()){
                mp[horizontalDistance] = currentNode->data;
            }
            
            if(currentNode->left!=NULL){
                q.push({currentNode->left,horizontalDistance-1});
            }
             if(currentNode->right!=NULL){
                q.push({currentNode->right,horizontalDistance+1});
            }
            
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }

};

