#include<bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        //O(nLogn) Approch
        for(int i=0;i<n;i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
vector<int> sortedSquares2(vector<int>& nums){
    //Two Pointer Approch O(n)
    int n = nums.size();
        vector<int> ans;
        int j=n-1;
        int i =0;
        while(i<=j){
            
            if(abs(nums[i])<abs(nums[j])){
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
            else{
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
vector<int> sortedSquares3(vector<int>& nums){
    //Optimized Two Pointer Approch O(n)
    int n = nums.size();
        vector<int> ans(n);
        int j=n-1;
        int i =0;
        int k=n-1;
        while(i<=j){
            
            if(abs(nums[i])<abs(nums[j])){
                ans[k--]=nums[j]*nums[j];
                j--;
            }
            else{
                ans[k--]=nums[i]*nums[i];
                i++;
            }
    
        }
        return ans;
}
int main(){
    vector<int> arr ={-4,-1,0,3,10};
    vector<int> result = sortedSquares3(arr);
    for(auto x:result){
        cout<<x<<" ";
    }
    return 0;
}