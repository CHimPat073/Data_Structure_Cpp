#include<bits/stdc++.h>
using namespace std;
 int BrutesumSubarrayMins(vector<int>& arr) {
        int sum=0;
        int n= arr.size();
        int mod=1e9+7;
        for(int i=0;i<n;i++){
            int mini=INT_MAX;
            for(int j=i;j<n;j++){
                mini=min(mini,arr[j]);
                sum=(sum+mini)%mod;
            }
        }
        return sum;
    }
vector<int> FindNSE(vector<int>& arr){
        int n=arr.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=n;
            }
            else{
                ans[i]=st.top();
            }
            st.push(i);
        }
        return ans;
    }
    vector<int> FindPSE(vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=st.top();
            }

            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse=FindNSE(arr);
        vector<int> pse=FindPSE(arr);
        int total =0;
        int n= arr.size();
        int mod= 1e9+7;
        for(int i=0;i<n;i++){
            int r=nse[i]-i;
            int l=i-pse[i];
            long long freq=l*r*1LL;
            int val=(freq*arr[i]*1LL)%mod;
            total=(total+val)%mod;

        }
        return total;
    }
int main(){
    vector<int> arr={3,1,2,4};
    cout<<sumSubarrayMins(arr);
    return 0;
}