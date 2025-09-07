#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    int n=nums.size();
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(nums[i]);
    }
    int index=0;  
    for(auto x:s){
        nums[index]=x;
        index++;
    }
    return s.size();     
}
int removeDuplicates2(vector<int>& nums) {
    int n=nums.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(nums[j] !=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return (i+1);         
}
int main(){
    vector<int> arr={0,0,1,1,1,2,2,3,3,4};
    cout<<removeDuplicates(arr);
    cout<<endl;
    cout<<removeDuplicates2(arr);
    return 0;
}