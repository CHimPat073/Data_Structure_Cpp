#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n==0){
        return 1;
    }
    return 2*solve(n-1);

}
int factorial(int n){
    if (n==0){
        return 1;
    }
    return n*factorial(n-1);
}
void countdigit(int n){
    if(n==0){
        cout<<"0"<<endl;
        return;
    }
    cout<<n<<" ";
    countdigit(n-1);
}
int fib(int n){ 
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    cout<<factorial(n);
    cout<<endl;
    countdigit(n);
    cout<<endl;
    cout<<fib(n);


    return 0;
}