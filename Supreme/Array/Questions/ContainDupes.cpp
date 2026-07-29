#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        int n =nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
    return false ; 
} 
bool containsDuplicate2(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]) return true;

    }
    return false;
}   
int main(){
    vector<int> arr1 ={1,2,3,4};
    vector<int> arr2 ={1,2,3,1};
    vector<int> arr3 = {2,14,18,22,22};
    cout<<containsDuplicate(arr1);
    cout<<endl;
    cout<<containsDuplicate2(arr1);
    cout<<containsDuplicate2(arr2);
    cout<<containsDuplicate2(arr3);
    

    return 0;
}