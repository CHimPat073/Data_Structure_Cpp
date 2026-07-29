#include<bits/stdc++.h>
using namespace std;
vector<int> nextLargerElementII(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for(int i=2*n-1;i>=0;i++){
        int num=arr[i%n];
        while(!st.empty() && st.top()<=num){
            st.pop();
        }
        if(i<n && !st.empty()){
            ans[i]=st.top();
        }
        st.push(num);
    }
    return ans;


}
int main(){
    vector<int> arr = {1,2,1};

    vector<int> ans = nextLargerElementII(arr);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}