#include<bits/stdc++.h>
using namespace std;
//brute force   
int singleNumber(vector<int>& nums) {
    int n =nums.size();
    int res= 0;
    int cnt=0;
    for(int i=0;i<n;i++){
        res=nums[i];
        cnt++;
        if(res==nums[i]){
            cnt=0;
        }
        else cnt++;
    }
    return res;

}
//optimal 
int singleNumber2(vector<int>& nums) {
   int n =nums.size();  
   int xorr=0;
   for(int i=0;i<n;i++){
         xorr=xorr^nums[i];
   }
   return xorr;
}
int main(){
    vector<int> arr={2,2,1};
    cout<<singleNumber(arr);
    cout<<endl;
    cout<<singleNumber2(arr);
    return 0;
}