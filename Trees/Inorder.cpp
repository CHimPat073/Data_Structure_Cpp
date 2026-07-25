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
        stack<Node*> st;
        Node* temp= root;

        while(true){
            if(temp!=NULL){
                st.push(temp);
                temp=temp->left;
            }
            else{
                if(st.empty()) break;
                temp = st.top();
                st.pop();
                ans.push_back(temp->data);
                temp= temp->right;
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