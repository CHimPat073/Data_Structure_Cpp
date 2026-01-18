#include<bits/stdc++.h>
using namespace std;

int Count0and1s(vector<int> arr){
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            cnt0++;
        }
        if(arr[i]==1)cnt1++;
    }
    return cnt0;
    return cnt1;
}
int main(){
    vector<int> arr = {0,1,1,0,1,0,0,1,1,1,0};
    int ans = Count0and1s(arr);
    cout<<"Count of 0s: "<<ans<<endl;
    cout<<"Count of 1s: "<<arr.size()-ans<<endl;
    return 0;
}