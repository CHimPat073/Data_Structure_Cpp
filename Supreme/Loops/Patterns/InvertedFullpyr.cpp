#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i+=1){
        for(int s=0;s<i;s+=1){
            cout<<" ";
        }
        for(int j=0;j<n-i;j+=1){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}