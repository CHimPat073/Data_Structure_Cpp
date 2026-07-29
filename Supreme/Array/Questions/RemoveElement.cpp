#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int n=nums.size();
    int i=0;
    for(int j=0;j<n;j++){
        if(nums[j] !=val){
            nums[i]=nums[j];
            i++;
        }
    }
    return i; 
}
int main(){
    vector<int> arr={0,1,2,2,3,0,4,2};
    int val=2;  
    cout<<removeElement(arr,val);
    return 0;
}