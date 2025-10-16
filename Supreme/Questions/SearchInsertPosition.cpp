#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return n;
    }
int main(){
    vector<int> arr ={1,2,5,7};
    int target = 5;
    cout<<searchInsert(arr,target);
    return 0;
}