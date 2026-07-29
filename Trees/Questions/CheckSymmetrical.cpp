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
bool helper(TreeNode* left, TreeNode* right){
    if(left==NULL || right==NULL) return left==right;

    if(left->data!=right->data) return false;
    return (helper(left->left,right->right)&& helper(left->right,right->left));

    }
bool isSymmetric(TreeNode* root) {
    return root==NULL|| helper(root->left,root->right);
}
int main(){
    struct TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    bool ans=isSymmetric(root);
    cout<<ans;
    return 0;
}