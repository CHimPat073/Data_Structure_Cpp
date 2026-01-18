#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums) {
    next_permutation(nums.begin(),nums.end());
    for(auto x:nums){
        cout<<x<<" ";
    }
    cout<<endl;
}
void nextPermutationOptimal(vector<int>& nums){
    int indx=-1;
        int n =nums.size();
        for(int i =n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                indx=i;
                break;
            }
        }
        if (indx == -1) {
        reverse(nums.begin(), nums.end());
    }
        for(int i=n-1;i>=indx;i--){
            if(nums[i]>nums[indx]){
                swap(nums[i],nums[indx]);
                break;
            }
        }
        reverse(nums.begin()+indx+1,nums.end());
        for(auto x:nums){
        cout<<x<<" ";
         }
        cout<<endl;
    
}
int main(){
    vector<int> arr={3,2,3};
    nextPermutation(arr);
    cout<<endl;
    nextPermutationOptimal(arr);

    return 0;
}