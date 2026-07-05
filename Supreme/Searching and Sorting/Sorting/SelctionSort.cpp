#include<bits/stdc++.h>
using namespace std;
vector<int> selectionSort(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    return arr;
}
int main(){
    vector<int> arr={64, 34, 25, 12, 22, 11, 90};
    cout<<"Unsorted array: ";
    for(auto num:arr){
        cout<<num<<" ";
    }
    cout<<endl;

    vector<int> sortedArr=selectionSort(arr);
    cout<<"Sorted array: ";
    for(int i=0;i<sortedArr.size();i++){
        cout<<sortedArr[i]<<" ";
    }
    cout<<endl;

    return 0;
}