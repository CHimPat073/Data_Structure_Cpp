#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i+=1){
        for(int j=0;j<i+1;j+=1){
            cout<<i+1;
            if(j!=i)
                cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i+=1){
        for(int j=0;j<n-i;j+=1){
            cout<<n-i;
            if(j!=n-i-1)
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}