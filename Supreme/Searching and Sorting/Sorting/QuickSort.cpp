#include<bits/stdc++.h>
using namespace std;
int FindPartition(vector<int> & arr,int low,int high){
    int pivot = arr[low];
int i = low;
int j = high;

while(i < j) {

    while(arr[i] <= pivot && i <= high - 1) {
        i++;
    }

    while(arr[j] > pivot && j >= low + 1) {   
        j--;
    }

    if(i < j)
        swap(arr[i], arr[j]);
}

swap(arr[low], arr[j]);
return j;
}
void quickSort(vector<int> & arr,int low,int high){
    if(low<high){
        int part=FindPartition(arr,low,high);
        quickSort(arr,low,part-1);
        quickSort(arr,part+1,high);
    }
}
int main(){
    vector<int> arr={64, 34, 25, 12, 22, 11, 90};
    cout<<"Unsorted array: ";
    for(auto num:arr){
        cout<<num<<" ";
    }
    cout<<endl;

    quickSort(arr, 0, arr.size()- 1);
    cout<<"Sorted array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}