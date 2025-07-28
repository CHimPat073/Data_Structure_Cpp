#include<bits/stdc++.h>
using namespace std;

//  int anc(int a){
//     a++;
//     cout<<a;
//  }
void pirntarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
 void inc(int arr[], int size){
    arr[0]++;
    cout<<"Incremented array"<<endl;
    pirntarray(arr, size);
 }
 
int main(){
    // int arr[5];
    // cout<<"Array created"<<endl;
    // cout<<arr<<endl;
    // cout<<&arr;
    
    // int arr[5] = {1, 2, 3, 4, 5};
    // int brr[10] = {1, 2, 3, 4, 5};
    // //this will not work as it is not a constant expression
    // // int crr[4] = {1, 2, 3, 4, 5};
    // cout<<"Array created"<<endl;

    //Indexing
    // int arr[]={1,2,3,4,9};
    //  cout<<"Array created"<<endl;
    // cout<<arr[0]<<endl; 

    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    //Input From user
    // int arr[5];
    // cout<<"Enter 5 elements of the array: ";
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    //     cout<<"The element at index "<<i<<" is: "<<arr[i]<<endl;
    // }
     

    //Questions:
    // take an array input and print it double value
    // int arr[5];
    // cout<<"Enter 5 elements of the array: ";
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    //     cout<<"The element at index "<<i<<" is: "<<2*arr[i]<<endl;
    // }

    //Question 2:
    //Given an array of 5 elements, change all the element to 1.
    // int arr[5]={1,2,3,4,5};
    // cout<<"Array created"<<endl;
    // for(int i=0;i<5;i++){
    //     arr[i]=1;
    //     cout<<"The element at index "<<i<<" is: "<<arr[i]<<endl;
    // }
    //using memset
    // int arr[5]={1,2,3,4,5};
    // cout<<"Array created"<<endl;
    
    // for(int i=0;i<5;i++){

    //     // memset(arr,1,sizeof(arr)); // Don't use memset for non-zero int initialization
    //     memset(arr,0,sizeof(arr));
        
    //     cout<<"The element at index "<<i<<" is: "<<arr[i]<<endl;
    // }

    // int a=5;
    // anc(a);
    // cout<<endl;
    // cout<<a<<endl;
    
    int arr[5]={1,2,3,4,5};
    int size=5;
    inc(arr, size);
    //This uses pass by reference
    pirntarray(arr, size);


    return 0;
}