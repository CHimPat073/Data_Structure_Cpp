#include<bits/stdc++.h>
using namespace std;
int Bs(vector<int> &arr,int s,int e, int key){
    int mid=s+(e-s)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        Bs(arr,s,mid-1,key);
    }
    else{
        Bs(arr,mid+1,e,key);
    }
}
int main(){
    vector<int> arr={1,2,5,6,7,9,12,25};
    int key=9;
    int n= arr.size();
    int ans=Bs(arr,0,n-1,key);
    cout<<ans;

    return 0;
}