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
void helper(Node* root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->data);
        helper(root->left,ans);
        helper(root->right,ans);
}
vector<int> preorderTraversal(Node* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
}
vector<int> preorderTraversalitr(Node* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            ans.push_back(root->data);
            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL){
                st.push(root->left);
            }
        }
        return ans;
    }
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    vector<int> ans=preorderTraversalitr(root);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}