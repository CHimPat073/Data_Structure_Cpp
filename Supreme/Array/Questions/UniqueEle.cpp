#include<bits/stdc++.h>
using namespace std;
int UniqueEle(vector<int> arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans =ans ^ arr[i];
    }
    return ans;
}

int main(){
    vector<int> arr1 = {1,2,3,4,4,5,6,5,1,2,3};
    int ans = UniqueEle(arr1);
    cout<<"Unique Element is: "<<ans<<endl;
    return 0;
} 