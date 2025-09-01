#include<bits/stdc++.h>
using namespace std;
int MaxNUm(vector<int> arr){
    int maxi=INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}

int MinNUm(vector<int> arr){
    int mini=INT_MAX;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    return mini;
}

int main(){
    vector<int> arr = {10,2,35,4,55,6,-1};
    cout<<"Maximum number is: "<<MaxNUm(arr)<<endl;
    cout<<"Minimum number is: "<<MinNUm(arr)<<endl;
    return 0;
}