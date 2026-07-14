#include<bits/stdc++.h>
using namespace std;
void Subsequence(string s,string out,int i){
    if(i>=s.length()){
        cout<<out<<endl;
           return;
    }
    //exclude
    Subsequence(s,out,i+1);
    //includes
    Subsequence(s,out+s[i],i+1);
}
int main(){
    string s="abc";
    string out="";
    int i=0;
    Subsequence(s,out,i);  
    return 0;
}