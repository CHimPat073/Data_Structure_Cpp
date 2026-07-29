#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode(int val){
        this->val=val;
        left=right=NULL;
    }
};
 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        
        queue<TreeNode*> q;
        q.push(root);

        bool flag=true;

        while(!q.empty()){
            int size=q.size();
            vector<int> level(size);
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();

                int idx=(flag) ? i :(size-1-i);
                level[idx] = node->val;

                if(node->right!=NULL) q.push(node->right);
                if(node->left!=NULL) q.push(node->left);
            }
            flag = !flag;
            ans.push_back(level);
        }
        return ans;
    }
int main(){
    struct TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    vector<vector<int>> ans = zigzagLevelOrder(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}