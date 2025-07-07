#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    // for(int i=0;i<n;i+=1){
    //     for(int j=n;j>i;j-=1){
    //         cout<<"* ";
    //     }
    // cout<<endl;
    // }
    for(int i=0;i<n;i+=1){
        for(int j=0;j<n-i;j+=1){
            cout<<"* ";
        }
    cout<<endl;
    }
    return 0;
}