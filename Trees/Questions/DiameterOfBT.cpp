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
int maxi=0;
    int helper(TreeNode* root){
        if(root==NULL) return 0;

        int lh=helper(root->left);
        int rh=helper(root->right);

        maxi=max(maxi,lh+rh);

        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);

        return maxi;
    }
    int helper2(TreeNode* root,int &dia){
        if(root==NULL) return 0;

        int lh=helper2(root->left,dia);
        int rh=helper2(root->right,dia);

        dia=max(dia,lh+rh);

        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree2(TreeNode* root) {
        int dia=0;
        helper2(root,dia);
        return dia;

    }
int main(){
    struct TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    bool ans=diameterOfBinaryTree2(root);
    cout<<ans;
    return 0;
}