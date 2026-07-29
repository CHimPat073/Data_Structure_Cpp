#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
int n =nums.size();
int maxSum =INT_MIN;
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
            sum+=nums[j];
            maxSum=max(maxSum,sum);
        
    }
}
return maxSum;       
}
int maxSubArrayOptimal(vector<int>& nums) {
    int n = nums.size();
    int maxSum =INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum>maxSum){
            maxSum=sum;
        }
        if(sum<0){
            sum=0;
        }
        
    }
    return maxSum;
}
int main(){
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(arr); 
    cout<<endl; 
    cout<<maxSubArrayOptimal(arr);
    return 0;
}