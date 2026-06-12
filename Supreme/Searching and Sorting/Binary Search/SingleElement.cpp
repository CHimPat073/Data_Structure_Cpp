#include<bits/stdc++.h>
using namespace std;
int SingleElement(vector<int> arr){
    int n= arr.size();
    if(n==1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];   
    if(arr[n-1]!=arr[n-2]) return arr[n-1];
    int s=1, e=n-2;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        else if((mid%2==1 && arr[mid-1]==arr[mid])){
            s=mid+1;
        }
        else if((mid%2==0 && arr[mid+1]==arr[mid])){
            s=mid+1;
        }
        else{
            e=mid-1;
        
    }
    }
    return -1;
}
int main(){
    vector< int > arr = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    int ans = SingleElement(arr);
    cout << "The single element in the array is: " << ans << endl;
    return 0;
}