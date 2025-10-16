#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n =nums.size();
        vector<int> ans;
        for(int i =0;i<n;i++){
            int product=1;
            for(int j=0;j<n;j++){
                if(i!=j){
                    product*=nums[j];
                }
            }
            ans.push_back(product);
        }
        return ans;
         
    }
vector<int> productExceptSelf2(vector<int>& nums) {
    
    int n =nums.size();
        vector<int> ans(n,1);
        vector<int> prefix(n,1);
        vector<int> sufix(n,1);
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            sufix[i]=sufix[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i]=prefix[i]*sufix[i];
        }
        return ans;
}
int main(){
    vector<int> arr={1,2,3,4};
    vector<int> ans =productExceptSelf(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}