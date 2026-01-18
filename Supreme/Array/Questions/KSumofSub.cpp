#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        //BruteForce 
        int n =nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j =i;j<n;j++){
                sum+=nums[j];
                if(sum==k){
                    cnt++;
                }
            }   
        }
        return cnt; 
    }
int subarraySumOptimal(vector<int>& nums, int k) {
    
}
int main(){
    vector<int> arr ={1,2,3};
    int k =3;
    cout<<"The No of Subarray for k = "<<k<<" sum is: "<<subarraySum(arr,k);
    return 0;
}