#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[n];

    for(int i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w; 
        adj[x].push_back({y,w});
        adj[y].push_back({x,w});
    }

    return 0;
}