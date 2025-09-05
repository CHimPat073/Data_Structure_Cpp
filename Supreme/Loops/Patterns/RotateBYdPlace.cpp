#include<bits/stdc++.h>
using namespace std;
//{1,2,3,4,5,6,7} d=3
//{5,6,7,1,2,3,4}

void PrintArray(vector<int>& arr) {
    for(auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
void BruteRotate(vector<int> arr, int d){
    
    int n = arr.size();
    if(n==0) return;
    d=d%n;
    if(d==0)return;
    
    vector<int> temp;
    for(int i=n-d;i<n;i++){
        temp.push_back(arr[i]);
    }
    for(int i = n - d - 1; i >= 0; i--){
        arr[i+d]=arr[i];
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    PrintArray(arr);
}

int main(){
    vector<int> arr={1, 2, 3, 4, 5, 6, 7};
    int d=3;    
    BruteRotate(arr,d);
    return 0;
}