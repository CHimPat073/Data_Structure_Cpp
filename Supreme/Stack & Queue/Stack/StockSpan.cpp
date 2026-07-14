#include<bits/stdc++.h>
using namespace std;
vector<int> BruteStockSpan(vector<int>& arr) {
vector<int> ans;
    for(int i=0;i<arr.size();i++){
        int cnt=1;
        for(int j=i-1 ;j>=0;j--){
            if(arr[j]<=arr[i]){
                cnt++;
            }
            else{
                break;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
vector<int> StockSpan(vector<int>& arr){
    int n=arr.size();
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(i+1);
            }
            else{
                ans.push_back(i-st.top());
            }
            st.push(i);
        }
        return ans;
}   
int main(){
    vector<int> arr={100,80,60,70,60,75,85};
    vector<int> ans=BruteStockSpan(arr);
    for(int x:ans){
        cout<<x<<" ";
    }
    vector<int> ans2=StockSpan(arr);
    cout<<endl;
    for(int x:ans2){
        cout<<x<<" ";
    }
    return 0;
}