#include<bits/stdc++.h>
using namespace std;
int minSearch(vector<int> arr){
     int s=0,e=arr.size()-1;
     int ans=INT_MAX;
     while(s<e){
        int mid=s+(e-s)/2;
        if(arr[s]<=arr[mid]){
            ans=min(ans,arr[s]);
            s=mid+1;
        } else{
            e=mid-1;
            ans=min(ans,arr[mid]);
            
        }  
     }return ans;
}
int main(){
    vector <int> arr ={4,5,6,7,2,3};
    int n = arr.size();
    
    int ans=minSearch(arr);
    cout<<"Minimum element in the rotated array is: "<<ans<<endl;
    return 0;
}