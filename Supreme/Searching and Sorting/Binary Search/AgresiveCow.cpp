#include<bits/stdc++.h>
using namespace std;
bool CanWePlace(vector<int>stalls, int dis, int k){
    int CntCows=1,lastCow=stalls[0];
    int n= stalls.size();
    for(int i=0;i<n;i++){
        if(stalls[i]-lastCow>=dis){
            CntCows++;
            lastCow=stalls[i];
        }
         if(CntCows>=k) return true;
    }
    return false;
}
int aggressiveCows(vector<int> stalls, int n, int k) {
    // code here
    sort(stalls.begin(),stalls.end());
    int s=0,e=(stalls[n-1]-stalls[0]);
    while(s<=e){
        int mid=s+(e-s)/2;
        if(CanWePlace(stalls,mid,k)){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return e;
}
int main(){
    vector<int> stall={0,3,4,7,10,9};
    int n= stall.size();
    int k=4;

    int ans= aggressiveCows(stall,n,k);
    cout<<ans;
    return 0;
}