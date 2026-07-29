#include<bits/stdc++.h>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k) { 
        int n= nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j] && abs(i-j)<=k){
                    return true;
                }
            }
        }
        return false;
    }
bool containsNearbyDuplicate2(vector<int>& nums, int k) {
    int n =nums.size();
    unordered_map<int,int> hp;
    for(int i=0;i<n;i++){
        if(hp.count(nums[i])){
            if(abs(hp[nums[i]]-i)<=k){
                return true;
            }
        }
        hp[nums[i]]=i;
    }
    return false;
}  
int main(){
    vector<int> arr ={1,2,3,1};
    int k =3;
    cout<<containsNearbyDuplicate(arr,k);
    return 0;
}