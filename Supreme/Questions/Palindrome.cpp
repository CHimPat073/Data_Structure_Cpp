#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x) {
    long long revNum =0;
    int dup=x;
     while(x>0){
        int id=x%10;
        revNum=revNum*10 +id;
        x/=10;   
    }
    if(dup == revNum) {
        return true;
    } else {
        
        return false;
    }
}
int main(){

    isPalindrome(121);
    return 0;
}