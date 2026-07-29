#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>& nums, int div){
    int n= nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ceil((double)nums[i]/(double) div);
    }
    return sum;
}
int BrsmallestDivisor(vector<int>& nums, int threshold){
    int ans=0;
    int e=*max_element(nums.begin(),nums.end());
    for(int d=1;d<=e;d++){
        if(sum(nums,d)<=threshold){
            ans=d;
        }
    }
    return ans;
}
int smallestDivisor(vector<int>& nums, int threshold) {
    int s=1, e=*max_element(nums.begin(),nums.end());
    while(s<=e){
        int mid=s+(e-s)/2;
        if(sum(nums, mid)<= threshold){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return s;

}

int main(){
    vector<int> arr={1,2,3,4,5};
    int thres=6;
    int ans = BrsmallestDivisor(arr, thres);
    cout<<"The Smallest divisor is:"<<ans<<endl;
    return 0;
}