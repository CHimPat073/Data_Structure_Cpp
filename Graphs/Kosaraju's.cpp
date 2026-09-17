#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void dfs(int node, vector<vector<int>> &adj,vector<int> &vis,stack<int> & st){
        vis[node]=1;
        for(auto x:adj[node]){
            if(!vis[x]){
                dfs(x,adj,vis,st);
            }
        }
        st.push(node);
    }
    void dfsstep3(int node, vector<vector<int>> &adj,vector<int> &vis,vector<int> &scc){
        vis[node]=1;
        scc.push_back(node);
        
        for(auto it:adj[node]){
            if(!vis[it]){
                dfsstep3(it,adj,vis,scc);
            }
        }
    }
    int countSCC(int V, vector<vector<int>> &edges) {
        // code here
        
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
        }
        
        vector<int> vis(V,0);
        stack<int> st;
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,adj,vis,st);
            }
        }
        
        vector<vector<int>> Tadj(V);
        vector<int> vis2(V,0);
        vector<vector<int>> ans;
        
        //reversing the graph
        for (auto &e : edges) {
            Tadj[e[1]].push_back(e[0]);
        }
        
        int sccCount=0;
        
        while(!st.empty()){
            int node= st.top();
            st.pop();
        
            if(!vis2[node]){
                vector<int> scc;
                sccCount++;
                
                dfsstep3(node,Tadj,vis2,scc);
                ans.push_back(scc);
            }
        }
        return sccCount;
    }
};
int main(){
    int V, E;
    cin >> V >> E;

    vector<vector<int>> edges;
    edges.resize(E, vector<int>(2));

    for (int i = 0; i < E; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    cout << Solution().countSCC(V, edges) << endl;
    return 0;
}