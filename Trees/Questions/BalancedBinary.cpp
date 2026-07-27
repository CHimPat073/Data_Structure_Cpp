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
    int helper(TreeNode* root){
        if(root==NULL) return 0;

        int lh=helper(root->left);
        int rh=helper(root->right);

        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;

        int lh= helper(root->left);
        int rh= helper(root->right);

        if(abs(lh-rh)>1) return false;
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);

        if(!l || !r) return false;

        return true;
    }
    int helper2(TreeNode* root){
        if(root==NULL) return 0;

        int lh=helper2(root->left);
        if(lh==-1) return -1;
        int rh=helper2(root->right);
        if(rh==-1) return -1;

        if(abs(lh-rh)>1) return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced2(TreeNode* root) {
        return helper2(root) != -1;
    }
int main(){
    struct TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    bool ans=isBalanced(root);
    cout<<ans;
   
    return 0;
}