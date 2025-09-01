#include<bits/stdc++.h>
using namespace std;

 void RevArray(vector <int> arr){
    int start =0;
    int end=arr.size()-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    vector<int> arr = {1,2,3,4,5};
    RevArray(arr); 

    return 0;
}