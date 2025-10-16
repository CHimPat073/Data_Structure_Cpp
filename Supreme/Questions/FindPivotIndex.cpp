#include<bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>& nums) { 
        int n =nums.size();
        int TotalSum=0;
        int LeftSum=0;
        // int MaxSum=INT_MIN;
        for(int i=0;i<n;i++){
            TotalSum+=nums[i];
        }
        for(int i=0;i<n;i++){
            TotalSum-=nums[i];
            if(LeftSum==TotalSum){
                // MaxSum=LeftSum;
                return i;
            }
            LeftSum+=nums[i];
        }
        return -1;
        
    }
int main(){
    vector<int> arr = {1,7,3,6,5,6};
    cout<<pivotIndex(arr);
    return 0;
}