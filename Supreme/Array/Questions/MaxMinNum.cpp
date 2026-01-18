#include<bits/stdc++.h>
using namespace std;
pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int min = INT_MAX;
        int max= INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return {min,max};
    }

int main(){
    vector<int> arr = {10,2,35,4,55,6,-1};
    pair<int,int> ans =getMinMax(arr);
    cout<<"Minimum Element is: "<<ans.first<<endl;
    cout<<"Maximum Element is: "<<ans.second<<endl;

    
    return 0;
}