#include<bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures1(vector<int>& temperatures) {
        int n= temperatures.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(temperatures[i]<temperatures[j]){
                    int res=j-i;
                    ans[i]=res;
                    break;
                }
            }
        }
        return ans;
    }
vector<int> dailyTemperatures2(vector<int>& temperatures) {
    int n=temperatures.size();
    stack<int> st;
    vector<int> ans(n,0);
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]=st.top()-i;
        }
        st.push(i); 
    }
    return ans;
}
int main(){
    vector <int> ans={73,74,75,71,69,72,76,73};
    vector<int> ans1=dailyTemperatures1(ans);
    vector<int> ans2=dailyTemperatures2(ans);

    for(int x:ans1){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:ans2){
        cout<<x<<" ";
    }
    return 0;
}