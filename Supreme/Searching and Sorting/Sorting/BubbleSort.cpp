#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int> & arr){
    int n = arr.size();
    for(int i=n-1;i>=1;i--){
        int isSwapped=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped=1;
            }
        }
        if(isSwapped==0){
            break;
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

    bubbleSort(arr);
    cout<<"Sorted array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}