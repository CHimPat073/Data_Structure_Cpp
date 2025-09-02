#include<bits/stdc++.h>
using namespace std;
vector<int> ThreeSum(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==target){
                //return {arr[i],arr[j],arr[k]};
                return{i,j,k};
            }
        }
    }
    }
    return {-1,-1,-1};
}
int main(){
int arr[] = {1,2,3,4,5,6};
    int target = 9;
   vector <int> ans = ThreeSum(arr,6,target);
    cout<<"Pair is: ";
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}