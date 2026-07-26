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
vector<int> preInPostTraversal(TreeNode* root) {

        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});

        vector<int> pre, in, post;

        if (root == NULL)
            return {};

        while (!st.empty()) {

            auto it = st.top();
            st.pop();

            // Part of Preorder
            // Increment 1 to 2
            // Push left side of the tree
            if (it.second == 1) {

                pre.push_back(it.first->data);
                it.second++;
                st.push(it);

                if (it.first->left != NULL) {
                    st.push({it.first->left, 1});
                }
            }

            // Part of Inorder
            // Increment 2 to 3
            // Push right
            else if (it.second == 2) {

                in.push_back(it.first->data);
                it.second++;
                st.push(it);

                if (it.first->right != NULL) {
                    st.push({it.first->right, 1});
                }
            }

            // Part of Postorder
            else {

                post.push_back(it.first->data);
            }
        }

        return pre;
    }
int main(){
    struct TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    vector<int> ans=preInPostTraversal(root);
    for(int x:ans){
        cout<<x<<" ";
    }
    return 0;
}