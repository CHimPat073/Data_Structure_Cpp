#include<bits/stdc++.h>
using namespace std;
int  Checkchar(string s, char c,int n, int i){
    if(i>=n){
        return -1;
    }
    if(s[i]==c){
        cout<<"Character found at index: "<<i<<endl;
        
    }
    return Checkchar(s,c,n,i+1);
}
int main(){
    string s;
    s="labubububu";
    int n=s.length();
    char c='b';
    int i=0;
    int ans=Checkchar(s,c,n,i);
    cout<<ans;
    return 0;
}