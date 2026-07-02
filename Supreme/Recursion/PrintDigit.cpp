#include<bits/stdc++.h>
using namespace std;
void PrintDigit(int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    PrintDigit(n/10);
    cout<<digit<<" ";
}
int main(){
    int n=0647; // this is octal number and its decimal value is 423
    // cin>>n; 
    PrintDigit(n);
    return 0;
}