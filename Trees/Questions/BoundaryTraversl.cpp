#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        this->data=val;
        left=right=NULL;
    }
};  
bool isLeaf(Node* root){
        return !root->left && !root->right;
    }
    void addLeftBoundary(Node* root,vector<int> &ans){
        Node* curr=root->left;
        while(curr){
            if(!isLeaf(curr)){
                ans.push_back(curr->data);
            }
            if(curr->left){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
        }
    }
    void addRightBoundary(Node* root,vector<int> & ans){
        Node* curr = root->right;
        vector<int> temp;
        while (curr) {
            if(!isLeaf(curr)) {
                temp.push_back(curr->data);
            }
            if(curr->right) {
                curr = curr->right;
            } else {
                curr = curr->left;
            }
        }
        for(int i=temp.size()-1;i>=0;--i){
            ans.push_back(temp[i]);
        }
    }
    void addLeafNode(Node* root,vector<int> &ans){
        if(isLeaf(root)){
            ans.push_back(root->data);
            return;
        }
        if(root->left!=NULL){
            addLeafNode(root->left,ans);
        }
        if(root->right!=NULL){
            addLeafNode(root->right,ans);
        }
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> res;
        if(root==NULL) return res;
        
        if(!isLeaf(root)) res.push_back(root->data);
        addLeftBoundary(root,res);
        addLeafNode(root,res);
        addRightBoundary(root,res);
        
        return res;
    }
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    vector<int> ans = boundaryTraversal(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}