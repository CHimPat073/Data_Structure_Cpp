#include<bits/stdc++.h>
using namespace std;
int Intersection(int arr1[],int arr2[],int n,int m){
    set<int> ans;
    for(int a1=0;a1<n;a1++){
        for(int a2=0;a2<m;a2++){
            if(arr1[a1]==arr2[a2]){
                 arr2[a2]=-1;
                ans.insert(arr1[a1]);
            }
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;

}
int main(){
    int arr1[] = {4,9,5};
    int arr2[] = {9,4,9,8,4};
    int ans = Intersection(arr1,arr2,5,5);

    return 0;
}