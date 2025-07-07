#include<bits/stdc++.h>
using namespace std;

 int raja= 420; // global variable 'raja' initialized with value 420
// Global variables can be accessed from anywhere in the program
int main(){
    int a ;// declaring a variable 'a' 
    int b=10; // declaring and initializing a variable 'b' with value 10 
    b=20; //updating the value of 'b' to 20
    if(true){
        //LOcal variable 'b' is declared inside this block
        int b=15;
        cout<<b<<endl;
    }
    cout<<b<<endl; // this will print the updated value of 'b' which is 20

    return 0;
}