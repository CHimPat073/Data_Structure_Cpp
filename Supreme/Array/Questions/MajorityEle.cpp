#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
    int n=nums.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(ans.size()==0||ans[0]!=nums[i]){
            int cnt =0;
            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]){
                cnt++;
                }
            }
            if(cnt>(n/3)){
                    ans.push_back(nums[i]);
                }   
        }
       if(ans.size()==2) break; 
    }
    return ans;
    }
vector<int> majorityElement2(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int, int> hp;
        int min =(n/3)+1;
        for(int i=0;i<n;i++){
            hp[nums[i]]++;
            if(hp[nums[i]]==min){
                ans.push_back(nums[i]);
            }
            if(ans.size()==2) break;
        }
        return ans;
    }
int main(){
    vector<int> arr={3,2,3};
    vector<int> ans=majorityElement(arr);
    for(auto x:ans){    
        cout<<x<<" ";
    }
    vector<int> ans2=majorityElement2(arr);
    for(auto x:ans2){    
        cout<<x<<" ";
    }
    return 0;
}