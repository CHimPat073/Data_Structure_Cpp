#include<bits/stdc++.h>
using namespace std;
 vector <int> findUnion(int arr1[], int arr2[] , int n, int m) {
    vector<int> ans;
    //Push all ele of arr1 in ans
    for(int i=0;i<n;i++){
        ans.push_back(arr1[i]);
    }

    for(int i=0;i<m;i++){
        ans.push_back(arr2[i]);
    
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {7,8,9};
    vector<int> ans = findUnion(arr1,arr2,5,3);
    
    return 0;
}