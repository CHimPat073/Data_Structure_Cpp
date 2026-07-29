#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    int rem=0,ans=0;
    bool isNegative = false;
    if(n<=INT32_MIN) return 0;
    if(n<0){    
        isNegative = true;
        n = -n; // 
    }
    while(n>0){
        if(ans>INT32_MAX/10) return 0; // Check for overflow
        rem=n%10;
        ans=ans*10 +rem;
        n/=10;
        
}
return (isNegative) ? -ans : ans;
    }
int main(){
    int res=reverseNum(1534679567);
    cout<<"The reverse of the number is: "<<res<<endl;
    return 0;
}