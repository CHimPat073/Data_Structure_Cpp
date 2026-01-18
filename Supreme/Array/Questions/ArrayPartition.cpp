#include<bits/stdc++.h>
using namespace std;
int arrayPairSum(vector<int>& nums) {
     int n=nums.size();
     int maxSum=0;
     sort(nums.begin(),nums.end());
     for(int i=0;i<n;i+=2){
        maxSum+=min(nums[i],nums[i+1]);
     }
     return maxSum;
}
int main(){
    vector<int> arr={1,4,3,2};
    cout<<arrayPairSum(arr);
    return 0;
}