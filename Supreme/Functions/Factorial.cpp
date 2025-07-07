#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0||n==1){
        return n;
    }
    
    return n* factorial(n-1);
    
}
int main(){
    int n;
    cout<<"Enter a number to find its factorial: ";
    cin>>n;
    int fact=factorial(n);
    cout<<"The factorial of "<<n<<" is: "<<fact<<endl;
    
    return 0;
}