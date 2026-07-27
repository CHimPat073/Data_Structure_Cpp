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
bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }
        
        return ((p->val)==(q->val) && 
        isSameTree(p->left,q->left) &&
        isSameTree(p->right,q->right));
    }
int main(){
    struct TreeNode* root1=new TreeNode(1);
    root1->left=new TreeNode(2);
    root1->right=new TreeNode(3);
    
    root1->left->left=new TreeNode(4);
    root1->left->right=new TreeNode(5);

    struct TreeNode* root2=new TreeNode(1);
    root2->left=new TreeNode(2);
    root2->right=new TreeNode(3);
    
    root2->left->left=new TreeNode(4);
    root2->left->right=new TreeNode(5);

    bool ans=isSameTree(root1,root2);
    cout<<ans;
    return 0;
}