#include<bits/stdc++.h>
using namespace std;
 vector <int> findUnion(int arr1[], int arr2[] , int n, int m) {
    vector<int> ans;
    //Push all ele of arr1 in ans
    for(int i=0;i<n;i++){
        ans.push_back(arr1[i]);
    }

    for(int i=0;i<m;i++){
        //check if arr2[i] is present in arr1 or not
        arr1[i]=-1;
        ans.push_back(arr2[i]);
    
    }
    // sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        
    }
}
int main(){
    int arr1[] = {3, 4, 6, 7, 9, 9};
    int arr2[] = {1, 5, 7, 8, 8};
    vector<int> ans = findUnion(arr1,arr2,6,5);
    
    return 0;
}