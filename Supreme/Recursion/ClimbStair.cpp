#include<bits/stdc++.h>
using namespace std;
int ClimbStairs(int n){
    if (n==0 || n==1){
        return 1;
    }
    return ClimbStairs(n-1)+ClimbStairs(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<ClimbStairs(n);
    return 0;
}