#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n, int i){
    //i last element me hoga to mera mera array sorted ho jaeygea islye i=n-1

    if (i==n-1){
        return true;
    }
    if (arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr, n, i+1);

}
int main(){
    int arr[]={1,1,1,1,1};
    int n =5;
    int i=0;

    bool ans=isSorted(arr,n,i); 
    if(ans){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}