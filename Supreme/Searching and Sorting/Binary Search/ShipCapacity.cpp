#include<bits/stdc++.h>
using namespace std;
int DayReq(vector<int>& weights, int cap){
    int day=1, load =0;
    for(int i=0;i<weights.size();i++){
        int maxCap=load+weights[i];
        if(maxCap>cap){
            day++;
            load=weights[i];
        }
        else{
            load+=weights[i];
        }
    }
    return day;
}
int shipWithinDays(vector<int>& weights, int days) {
    int s=*max_element(weights.begin(),weights.end());
    int e=accumulate(weights.begin(),weights.end(),0);
    while(s<=e){
        int mid=s+(e-s)/2;
        if(DayReq(weights,mid)<=days){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return s;
}
int BFshipWithinDays(vector<int>& weights, int days) {
    int s=*max_element(weights.begin(),weights.end());
    int e=accumulate(weights.begin(),weights.end(),0); 
    for(int c=s;c<=e;c++){
        if(DayReq(weights,c)<=days){
            return c;
        }
    }
    return e;
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int days=5;
    int ans= shipWithinDays(arr,days);
    cout<<ans;
    return 0;
}