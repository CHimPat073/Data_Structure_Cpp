#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end){
        int ele=arr[mid];
        if(ele==key){
            return mid;
        }
        else if(key<ele){
            end =mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
} 
int main(){
    int arr[]={1,2,3,4,6,11,15,23};
    int n=8;
    int key =2;
     
     int indexofKey= BinarySearch(arr,n,key); 
     if (indexofKey==-1){
        cout<<"Key not found in the array";
     }
     else{
        cout<<"Key found at index "<<indexofKey;
     }




    return 0;
}     