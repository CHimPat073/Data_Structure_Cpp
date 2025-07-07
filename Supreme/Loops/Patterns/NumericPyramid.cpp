#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  
    cin>>n;
    
    for(int i=0;i<n;i++){
        //spaces
        int count=i+1;
        for(int s=0;s<n-i-1;s++){
            cout<<" ";
            
        }
        for(int j=0;j<i+1;j++){
            cout<<count;
            count++;

        }
        int start=2*i;
        for(int k=0;k<i;k++){
            cout<<start;
            start--;
              
        }
        cout<<endl;
    }
    return 0;
}