#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums) {
    int n =nums.size();
        int maxi =INT_MIN;
        for(int i=0;i<n;i++){
            int prod =1;
            for(int j=i;j<n;j++){
                prod=prod*nums[j];
                maxi=max(maxi,prod);
            }
            
        }
        return maxi;     
}
int maxProduct2(vector<int>& nums) {
    int n =nums.size();
       int prefix=1;
       int suffix=1;
       int maxi=INT_MIN;
       for(int i=0;i<n;i++){
            if(prefix==0) prefix=1;
            if(suffix==0) suffix=1;
            prefix=prefix*nums[i];
            suffix*=nums[n-i-1];
            maxi=max(maxi,max(prefix,suffix));
       }
       return maxi;
}
int main(){
    vector<int> arr ={2,3,-2,4};
    cout<<maxProduct;
    cout<<endl;
    cout<<maxProduct2;
    return 0;
}