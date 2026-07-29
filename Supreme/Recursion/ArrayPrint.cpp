#include<bits/stdc++.h>
using namespace std;
void Print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void PrintRecursive(int arr[], int size, int i){
    if(i==size){
        return;
    }
    cout<<arr[i]<<" ";
    PrintRecursive(arr,size,i+1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5; 
    PrintRecursive(arr,size,3);

    return 0;
}