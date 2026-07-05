#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& arr){
    int n = arr. size();
}
int main(){
    vector<int> arr={64, 34, 25, 12, 22, 11, 90};
    cout<<"Unsorted array: ";
    for(auto num:arr){
        cout<<num<<" ";
    }
    cout<<endl;

    insertionSort(arr);
    cout<<"Sorted array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}