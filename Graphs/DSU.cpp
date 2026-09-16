#include<bits/stdc++.h>
using namespace std;
class DisJoint{
    vector<int> rank,parent,size;
public:
    DisJoint(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1);

        for(int i=0;i<n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }
    int findUltParent(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=findUltParent(parent[node]);
    }
    void UnionByRank(int u,int v){
        int ultp_u=findUltParent(u);
        int ultp_v=findUltParent(v);

        if(ultp_u == ultp_v) return;
        if(rank[ultp_u] < rank[ultp_v]){
            parent[ultp_u]=ultp_v;
        }
        else if(rank[ultp_v]<rank[ultp_u]){
            parent[ultp_v] =ultp_u;
        }else{
            parent[ultp_v] =ultp_u;
            rank[ultp_u]++;
        }
    }
    void UnionBySize(int u,int v){
        int ultp_u=findUltParent(u);
        int ultp_v=findUltParent(v);

        if(ultp_u == ultp_v) return;

        if(size[ultp_u]<size[ultp_v]){
            parent[ultp_u]=ultp_v;
            size[ultp_v]+=size[ultp_u];
        }else{
            parent[ultp_v]=ultp_u;
            size[ultp_u]+=size[ultp_v];
        }
    }
};
int main(){
    DisJoint ds(7);

    ds.UnionBySize(1,2);
    ds.UnionBySize(2,3);
    ds.UnionBySize(4,5);
    ds.UnionBySize(6,7);
    ds.UnionBySize(5,6);

    if(ds.findUltParent(3) == ds.findUltParent(7)){
        cout<<"Same\n";
    }else{
        cout<<"Not Same\n";
    }

    ds.UnionBySize(3,7);

    if(ds.findUltParent(3) == ds.findUltParent(7)){
        cout<<"Same\n";
    }else{
        cout<<"Not Same\n";
    }

    return 0;
}