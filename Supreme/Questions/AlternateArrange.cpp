#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size();
vector<int> pos;
vector<int> neg;

for(int i =0;i<n;i++){
    if(nums[i]>=0){
        pos.push_back(nums[i]);
    } else {
        neg.push_back(nums[i]);
    }
}
for(int i=0;i<n;i++){
    nums[2*i]=pos[i];
    nums[2*i+1]=neg[i];
        
}
return nums;
}
vector<int>reaarangeArrayOptimal(vector<int>& nums){
    
}
int main(){
    vector<int> arr={3,1,-2,-5,2,-4};
    rearrangeArray(arr);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}