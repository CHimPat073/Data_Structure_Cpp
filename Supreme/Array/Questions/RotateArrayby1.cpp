#include<bits/stdc++.h>
using namespace std;
void PrintArray(vector<int>& arr) {
    for(auto i : arr) {
        cout << i << " ";
    }
    cout << endl;
}
void rotateArraybyoneRight(vector<int>& arr) {
        int n= arr.size();
        int temp =arr[n-1];
        for(int i=n-1;i>=1;--i){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        PrintArray(arr);
    }
void rotateArraybyoneLeft(vector<int>& arr) {
        int n = arr.size();
        int temp = arr[0];
        for(int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
        PrintArray(arr);
    }
 int main(){
    vector<int> arr={1, 2, 3, 4, 5};
    rotateArraybyoneRight(arr);
    rotateArraybyoneLeft(arr);
    return 0;
}