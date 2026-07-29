#include<bits/stdc++.h>
using namespace std;
void PrintArray(vector<int>& arr) {
    for(auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
//Two Pointer Approach
void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    int start=0;
    int j;
    for(j=0;j<n;j++){
        if(nums[j] !=0){
            swap(nums[start],nums[j]);
            start++;
        }
    }
   
    PrintArray(nums);  
}

int main(){
    vector<int> arr={0,1,0,3,12};
    moveZeroes(arr);
    return 0;
}