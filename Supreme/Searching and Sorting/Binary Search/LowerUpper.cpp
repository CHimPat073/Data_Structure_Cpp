#include<bits/stdc++.h>
using namespace std;
int LowerBound(vector<int> arr, int n, int target){
    int start=0;
    int end =n-1;
    int mid =start+(end-start)/2;
    int ans=n;

    while(start<=end){
        if(arr[mid]>=target){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int UpperBound(vector<int> arr, int n, int target){
    int start=0;
    int end =n-1;
    int mid =start+(end-start)/2;
    int ans=n;

    while(start<=end){ 
        if(arr[mid]>target){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){ 
    vector<int> arr={1,2,3,3,7,8,9,9,9,11};
    int n = arr.size();
    int target=9;
    
    int ans = LowerBound(arr, n,target);
    cout<<"Lower Bound of "<<target<<" is at index "<<ans<<endl;

    int ans2 = UpperBound(arr, n,target);
    cout<<"Upper Bound of "<<target<<" is at index "<<ans2<<endl;   
    return 0;
}
