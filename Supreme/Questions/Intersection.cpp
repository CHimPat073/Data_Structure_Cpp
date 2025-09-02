#include<bits/stdc++.h>
using namespace std;
int Intersection(int arr1[],int arr2[],int n,int m){
    vector<int> ans;
    for(int a1=0;a1<n;a1++){
        for(int a2=0;a2<m;a2++){
            if(arr1[a1]==arr2[a2]){
                ans.push_back(arr1[a1]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
}
}
int main(){
    int arr1[] = {1,2,2,3,4,5};
    int arr2[] = {7,8,9,1,2,2};
    int ans = Intersection(arr1,arr2,5,5);

    return 0;
}