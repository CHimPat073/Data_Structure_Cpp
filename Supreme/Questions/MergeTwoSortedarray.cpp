#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        for(int i=0;i<m;i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        nums1=ans;
    }
int main(){
    vector<int> arr1={1,2,3,0,0,0};
    vector<int> arr2={2,5,6};
    int m=3,n=3;
    merge(arr1,m,arr2,n);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}