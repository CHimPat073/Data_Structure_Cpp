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
vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        if(root==NULL) return ans;
        
        queue<pair<Node*,int>> q;
        map<int,int> mp;
            
        q.push({root,0});
        
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            
            Node* temp= it.first;
            int line=it.second;
            
            if(mp.find(line)==mp.end()){
                mp[line]=temp->data;
            }
            
            if(temp->left!=NULL){
                q.push({temp->left,line-1});
            }
             if(temp->right!=NULL){
                q.push({temp->right,line+1});
            }
            
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
int main(){
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);

    vector<int> ans = topView(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}