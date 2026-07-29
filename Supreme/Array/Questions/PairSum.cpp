#include<bits/stdc++.h>
using namespace std;
vector<int> PairSum(int arr[],int n,int target){
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                //return {arr[i],arr[j]};
                return{i,j};
            }
        }
    }
    return {-1,-1};
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int target = 9;
   vector <int> ans = PairSum(arr,6,target);
    cout<<"Pair is: ";
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}