#include<bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {
    //TLE
        int n =nums.size();
        vector<int> ans ;
        for(int i=1;i<=n;i++){
            bool found =false;
            for(int x : nums){
                if(x==i){
                    found=true;
                    break;
                }
            }
            if(found==false){
                ans.push_back(i);
            }
        }
        return ans;
    
    }
vector<int> findDisappearedNumbers2(vector<int>& nums) {
    int n =nums.size();
}
int main(){
    vector<int> arr={4,3,2,7,8,2,3,1};
    vector<int> ans=findDisappearedNumbers(arr);
    for(auto x:ans){
        cout<<x<<" ";
    }
    return 0;
}