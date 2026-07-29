#include<bits/stdc++.h>
using namespace std;

bool CheckEven(int n)
{
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int N;
    cout<<"Enter your number: ";
    cin>>N;
    CheckEven(6);

    return 0;
}