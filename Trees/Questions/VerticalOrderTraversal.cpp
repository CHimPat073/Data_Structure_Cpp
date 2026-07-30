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
vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> todo;
        queue<pair<TreeNode*,pair<int,int>>> q;

        q.push({root,{0,0}});

        while(!q.empty()){
            auto a=q.front();
            q.pop();
            TreeNode* node=a.first;
            int x=a.second.first;
            int y=a.second.second;
            todo[x][y].insert(node->val);
            if(node->left!=NULL){
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right!=NULL){
                q.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>> ans;
        for(auto x: todo){
            vector<int> col;
            for(auto y:x.second){
                col.insert(col.end(),y.second.begin(),y.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
int main(){
    struct TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    vector<vector<int>> ans = verticalTraversal(root);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}