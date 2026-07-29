#include<bits/stdc++.h>
using namespace std;

void ExtremePoint(vector<int> arr){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        if(start==end){
            cout<<arr[start]<<" ";
        }else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        
        }
        start++;
        end--;
    }

}
int main(){
    vector<int> arr = {1,2,3,4,5};
    ExtremePoint(arr);
    return 0;
}