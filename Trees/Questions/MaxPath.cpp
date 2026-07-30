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
int maxi=INT_MIN;
    int helper(TreeNode* root,int& maxi){
        if(root==NULL) return 0;

        int ls=max(0,helper(root->left,maxi));
        int rs=max(0,helper(root->right,maxi));

        maxi=max(maxi,ls+rs+root->val);

        return (root->val)+max(ls,rs);
    }
    int maxPathSum(TreeNode* root) {
        int maxp=INT_MIN;
        helper(root,maxp);
        return maxp ;
    }

int main(){
    struct TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    int ans=maxPathSum(root);
    cout<<ans;  

    return 0;
}