#include<bits/stdc++.h>
using namespace std;

int DecimaltoBinary(int n){
     int binary=0;
     int i=0;
    while(n>0){
        int rem=n%2;
        int binary=rem*pow(10,i++)+binary;
        n/=2;

    }
    return binary;    
}
int DecimaltoBinary2(int n){
     int binary=0;
     int i=0;
    while(n>0){
        int rem=(n&1);
        int binary=rem*pow(10,i++)+binary;
        n=n>>1;

    }
    return binary;    
}
int BinaryToDecimal(int n){
    int decimal=0;
    int base=2;
    int i=0;
    while(n>0){ 
        int bit=n%10;
        decimal=decimal+bit*pow(base,i);
        i++;
        n/=10; 
    }
    
    return decimal;
}
int main(){
    // int b; 
    // cin>>b;
    // int bin=DecimaltoBinary2(b);
    // cout<<bin<<endl;

    int binary;
    cout << "Enter a binary number: ";
    cin>>binary;
    int decimal = BinaryToDecimal(binary);
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}