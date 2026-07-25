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
void helper(Node* root, vector<int> & arr){
        if(root==NULL){
            return;
        }
        helper(root->left,arr);
        arr.push_back(root->data);
        helper(root->right,arr);
    }
vector<int> inorderTraversal(Node* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
}
vector<int> inorderTraversalitr(Node* root) {
    vector<int> ans;
    if(root==NULL) return ans;
    stack<Node*> st;
    while(!st.empty()){
        if(root->left!=NULL){
            st.push(root->left);
            root=root->left;
        }
        else{
            root=st.top();
            st.pop();
            ans.push_back(root->data);
            if(root->right!=NULL){
                st.push(root->right);
            }
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

    vector<int> ans=inorderTraversalitr(root);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}