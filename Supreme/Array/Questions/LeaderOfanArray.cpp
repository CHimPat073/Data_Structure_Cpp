#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> res;
        
        int n =arr.size();
        int max =arr[n-1];
        res.push_back(max);
        
        for(int i =n-2;i>=0;i--){
            if(arr[i]>max){
                max=arr[i];
                res.push_back(max);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
int main(){
    vector<int> arr={30, 10, 10, 5};
    vector<int> ans = leaders(arr); 
    for(auto i:ans){
        cout<<i<<" ";
    }   
    return 0;
}