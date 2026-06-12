#include<bits/stdc++.h>
using namespace std;
int SearchRoated(vector<int> arr, int target){
    int n =arr.size();
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            return ans;
        }
        //if element is not unique then we have to check for duplicates
        if (arr[start]==arr[mid] && arr[mid]==arr[end]){
            start++;
            end--;
        }
        else if(arr[start]<=arr[mid]){
            if(arr[start]<=target && target<=arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> arr ={7,8,9,1,2,3,4,5,6};
    int target = 1;
    int ans = SearchRoated(arr,target);
    cout<<ans;
    return 0;
}