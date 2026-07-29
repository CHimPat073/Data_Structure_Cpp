#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr,int low,int mid,int high){
    vector<int> ans;
    int l=low,r=mid+1;
    while(l<=mid && r<=high){
        if(arr[l]<arr[r]){
            ans.push_back(arr[l]);
            l++;
        }
        else{
            ans.push_back(arr[r]);
            r++;
        }
    }
    while(l<=mid){
        ans.push_back(arr[l]);
        l++;
    }
    while(r<=high){
        ans.push_back(arr[r]);
        r++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=ans[i-low];
    }
}
void mergeSort(vector<int>& arr,int low,int high){
    if(low>=high) return ;
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){
    vector<int> arr={64, 34, 25, 12, 22, 11, 90};
    cout<<"Unsorted array: ";
    for(auto num:arr){
        cout<<num<<" ";
    }
    cout<<endl;

    mergeSort(arr, 0, arr.size()- 1);
    cout<<"Sorted array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}