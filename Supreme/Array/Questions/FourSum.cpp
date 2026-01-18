#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
        

set <vector<int>> s;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                if(nums[i]+nums[j]+nums[k]+nums[l]==target){
                   vector<int> temp ={nums[i],nums[j],nums[k],nums[l]};
                   sort(temp.begin(),temp.end());
                   s.insert(temp);
                }
            }
        }
    }    
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
}
}
int main(){
    vector<int> nums = {};
    int target = 9;
    vector<vector<int>> ans = fourSum(nums, target);
    cout << "The quadruplets are: \n";
    for (auto it : ans) {
        cout << "[";
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}