#include<bits/stdc++.h>
using namespace std;
int findPeakElement(vector<int>& nums) {
        int n= nums.size();
        int ans =-1;
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        for( int i=0;i<n;i++){
            if(nums[i-1] < nums[i]&&nums[i]>nums[i+1]) 
            ans=i;
        }
        return ans;
    }
int PeakElement(vector<int> arr){
    int n= arr.size();
    int s=1,e=n-2;
    if (n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid-1] < arr[mid] && arr[mid]>arr[mid+1]) return mid;
        else if( arr[mid]>arr[mid-1]) {
            s=mid+1;
        } 
        else{
            e=mid-1;
        }
    }
    return -1;

}
int main(){
    vector<int> arr={1,2,1,3,5,6,4};
     int ans= PeakElement(arr);
     cout<<"The Peak element in the array is: "<<ans<<endl;
    return 0;
}