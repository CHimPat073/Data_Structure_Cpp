#include<bits/stdc++.h>
using namespace std;
int maxAscendingSum(vector<int>& nums) {
        int n =nums.size();
        int sum=nums[0];
        int maxSum=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
            }
            else{
                sum=nums[i];
            }
            maxSum=max(maxSum,sum);
        }
        return maxSum; 
    }
int main(){
    vector<int> arr={10,20,30,40,50};
    cout<<maxAscendingSum(arr);
    return 0;
}