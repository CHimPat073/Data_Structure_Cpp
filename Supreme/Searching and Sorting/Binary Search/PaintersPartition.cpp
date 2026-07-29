//split array is also same 

#include<bits/stdc++.h>
using namespace std;
int findPartition(vector<int> nums,int max){
    int part=1;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        if(sum+nums[i]<=max){
            sum+=nums[i];
        }
        else{
            part++;
            sum=nums[i];
        }
    }
    return part;
}
int splitArray(vector<int>& nums, int k) {
        int s=*max_element(nums.begin(), nums.end());
        int e=accumulate(nums.begin(),nums.end(),0);
        while(s<=e){
            int mid=s+(e-s)/2;
            if(findPartition(nums, mid)>k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return s;
    }
int main(){
    vector<int> arr={10,20,30,40};
    int k=2;
    cout<<splitArray(arr,k)<<endl;
    return 0;
}