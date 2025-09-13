#include<bits/stdc++.h>
using namespace std;
int Fib(int b){
    
    if(b<=0) return 0;
    if(b==1) return 1;
    return Fib(b-1)+Fib(b-2);
    
    
}
int main(){
    int n;
    cin>>n;
    cout<<Fib(n);
    return 0;
}