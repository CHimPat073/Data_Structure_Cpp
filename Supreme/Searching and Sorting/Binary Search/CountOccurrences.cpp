#include<bits/stdc++.h>
using namespace std;
int FirstOccurence(vector<int> arr,int n,int target){
    int start =0;
    int end=n-1;
    int ans =-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end =mid-1;
        }
        else if(target>arr[mid]){ 
            start=mid+1;
        }
        else if (target<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
    
}
int LastOccurence(vector<int> arr, int n , int target){
    int start =0;
    int end=n-1;
    int ans =-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(target>arr[mid]){ 
            start=mid+1;
        }
        else if (target<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int countOccurences(vector<int> arr, int n, int target){
    int first = FirstOccurence(arr,n,target);
    if(first==-1){
        return 0; 
    }
    int last = LastOccurence(arr,n,target);
    return last-first+1; // Total occurrences of the target
}
int main(){
    vector<int> arr={1,3,4,4,4,4,4,6,7 ,9};
    int n =arr.size();
    int target=8;

    int ans=countOccurences(arr,n,target);
    cout<<"Count of "<<target<<" is "<<ans;
    return 0;
}