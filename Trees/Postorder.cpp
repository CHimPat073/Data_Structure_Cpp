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
vector<int> postorderTraversalitr2(Node*root){
        Node* curr=root;
        vector<int> ans;
        stack<Node*> st;
        while(curr!=NULL || !st.empty()){
            if(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            else{
                Node* temp= st.top()->right;
                if(temp==NULL){
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->data);
                    while(!st.empty() && temp==st.top()->right){
                        temp=st.top();
                        st.pop();
                        ans.push_back(temp->data);
                    }
                }
                else{
                    curr=temp;
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

    vector<int> ans=postorderTraversalitr(root);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}