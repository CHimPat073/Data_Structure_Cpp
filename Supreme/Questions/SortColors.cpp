#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
    int n =nums.size();
    //Brute Force

    // int cnt0=0;
    // int cnt1=0;
    // int cnt2=0;
    // for(int i=0;i<n;i++){
    //     if(nums[i]==0) cnt0++;
    //     if(nums[i]==1) cnt1++;
    //     if(nums[i]==2) cnt2++;
    // }
    // for(int i=0;i<cnt0;i++){
    //     nums[i]=0;
    // }
    // for(int i=cnt0;i<cnt0+cnt1;i++){
    //     nums[i]=1;
    // }
    // for(int i=cnt0+cnt1;i<n;i++){
    //     nums[i]=2;

    // }

    //Optimal 
    int  mid=0;
    int low=0;
    int high=n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            mid++;
            low++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }

    }
    
}

int main(){
    vector<int> arr={2,0,2,1,1,0};
    sortColors(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}