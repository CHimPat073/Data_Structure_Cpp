#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    for(int i=0;i<n;i+=1){
        for(int j=0;j<i+1;j+=1){
            cout<<j+1;
        }
        for(int j=0;j<2*n-2*i-2;j+=1){
            cout<<" ";
        }
        for(int j=0;j<i+1;j+=1){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}