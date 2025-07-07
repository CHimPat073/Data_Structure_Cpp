#include<bits/stdc++.h>
using namespace std;
void CheckPrime(int b){
    for(int i=2;i<b;i++){
    if(b%i==0){
        cout<<b<<" is not a prime number."<<endl;
    }
}   
    cout<<b<<" is a prime number."<<endl;


}

int main(){
    int n;
    cout << "Enter a number to check if it is prime: ";
    cin >> n;
    bool CheckPrime(n);
    return 0;
}