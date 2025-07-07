#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i+=1){
        for(int s=0;s<n-i-1;s+=1){
            cout<<" ";
        }
        for(int j=0;j<i+1;j+=1){
            if(i==n-1||j==0||j==i){
                cout<<"* ";

            }
            else{
                cout<<"  ";
            }
        
        }
        cout<<endl;
     }
    return 0;
}