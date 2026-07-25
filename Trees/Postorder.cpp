#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};
void helper(Node* root, vector<int> &ans){
        if(root==NULL) return;

        helper(root->left,ans);
        helper(root->right,ans);
        ans.push_back(root->data);
    }
vector<int> postorderTraversal(Node* root) {
        vector<int> ans;
        helper(root, ans);
        return ans;
}
vector<int> postorderTraversalitr(Node* root) {
    vector<int> ans;
        if(root==NULL) return ans;
        stack<Node*> st1, st2;
        st1.push(root);
        while(!st1.empty()){
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=NULL){
                st1.push(root->left);
            }
            if(root->right!=NULL){
                st1.push(root->right);
            }
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->data);
            st2.pop();
        }
        return ans;
    }
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    vector<int> ans=postorderTraversalitr(root);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}