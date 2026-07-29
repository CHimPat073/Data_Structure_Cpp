#include<bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
        int n =nums.size();
        vector<int> runningSum;
        runningSum.push_back(nums[0]);
        for(int i=1;i<n;i++){
             int sum=runningSum[i-1]+nums[i];
            runningSum.push_back(sum);   
        }
        return runningSum;  
    }
    vector <int> runningSum2(vector<int>& nums) {
        int n =nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        return nums;
    }

int main(){
    vector<int> arr={1,2,3,4};
    vector<int> ans =runningSum2(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}