#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<m && j<n){
        if(nums1[i]>nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        } else {
            ans.push_back(nums2[j]);
            j++;
        }
    }   
        
}
int main(){
    vector<int> arr1 ={1,2,3,0,0,0};
    vector<int> arr2 ={2,5,6};
    int m=3;
    int n=3;
    merge(arr1,m,arr2,n);
    
    return 0;
}