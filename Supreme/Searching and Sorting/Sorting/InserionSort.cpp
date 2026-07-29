#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>& arr){
    int n = arr. size();
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
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