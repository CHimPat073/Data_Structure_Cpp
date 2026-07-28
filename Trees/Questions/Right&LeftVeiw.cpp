#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode(int val){
        data=val;
        left=right=NULL;
    }
};
vector<vector<int>> helper(TreeNode* root){
            vector<vector<int>> ans;
        if(root==NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->data);
            }
            ans.push_back(level);
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> ans=helper(root);

        vector<int> rightveiw;

        for(int i=0;i<ans.size();i++){
            rightveiw.push_back(ans[i].back());
        }
        return rightveiw;
    }
int main(){
    struct TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    vector<int> ans=rightSideView(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}