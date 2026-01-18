#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums) {
    int  n=nums.size(),count =0;
    for(int i=1;i<n;i++){
        if(nums[i]<nums[i-1]){
            count++;
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
    }
    if(count<=1){
        return true;
    }
    return false;
}
int main(){
    vector<int> arr={3,4,5,1,2};
    cout<<check(arr);
    return 0;
}