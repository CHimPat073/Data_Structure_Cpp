#include<bits/stdc++.h>
using namespace std;

int addTwoNums(int a, int b){

    int c=a+b;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<c;
    return c;  
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    addTwoNums(a, b);
    
    return 0;
}