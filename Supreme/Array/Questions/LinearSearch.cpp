#include<bits/stdc++.h>
using namespace std;
int search(vector<int> arr, int x) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x){
                return i;
            }
        }
        return -1;
    }
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int x = 0;
    int ans = search(arr, x);
    if(ans!=-1){
        cout<<"Element found at index: "<<ans<<endl;
    }else{
        cout<<ans<<endl;
    }
    return 0;
}