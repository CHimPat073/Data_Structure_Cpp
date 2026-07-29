#include<bits/stdc++.h>
using namespace std;
void printarray(int arr[],int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
bool FindKey(int arr[], int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
void Extreme(int arr[],int size){
    int start=0;
    int end = size-1;

    while(true){
        if(start>end){
            break;
        }
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else{ 
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
}
void Reversearray(int arr[],int size){
    int start =0;
    int end =size-1;

    while(start<=end){
        
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printarray(arr,size);

}



int main(){
    int arr[]={ 1, 2, 3, 4, 5,6 };
    int size=6;
    // int key=10;
    // int res=FindKey(arr,size,key);
    // cout<<res;
    // Extreme(arr,size);
     Reversearray(arr,size);
    // int s
    // cout<<arr.size();
    
    return 0;
}