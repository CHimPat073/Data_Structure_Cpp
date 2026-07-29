#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target) {
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                return i;
            }
        }
    return -1;
}
int main(){
    vector<int> arr={-1,0,3,5,9,12};
    int target =9;
    cout<<search(arr,target);
    return 0;
}