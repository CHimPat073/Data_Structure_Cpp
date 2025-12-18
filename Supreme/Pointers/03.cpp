#include<bits/stdc++.h>
using namespace std;
void  Solve(int a){
    a++;
    
}
void  SolveRefrence(int &a){
    a++;
    
}

int* solve(){
    int a=10;
    int* p=&a;
    cout<<p<<endl;
    return p; //Returning address of local variable (Dangerous)
}
int main(){
    int a =5; 
     int* p =&a;
     int** pp =&p; //pp is pointer to int*

        cout<<a<<endl;//value of a
        cout<<&a<<endl;        
        cout<<p<<endl;
        cout<<&p<<endl;        //address of a
        cout<<*p<<endl;       //dereferencing p to get value of a
        cout<<pp<<endl;       //address of p
        cout<<*pp<<endl;      //dereferencing pp to get address of a 
        cout<<**pp<<endl;     //dereferencing pp twice to get value of a


    cout<<endl<<endl;
    //refrence Variable
    int x=10;
    int& y=x; //y is reference variable to x
    cout<<x<<endl; //10
    cout<<y<<endl; //10
    cout<<&x<<endl; //address of x
    cout<<&y<<endl; //address of y (same as address of x)

    cout<<endl<<endl;
    //call by value vs call by refrence
    cout<<"Before calling Solve function: "<<a<<endl; 
    Solve(a); //Ek Copy of a is passed
    cout<<"After calling Solve function: "<<a<<endl; 

    cout<<endl;
    cout<<"Before calling SolveRefrence function: "<<a<<endl;
    SolveRefrence(a); //Actual a is passed using refrence
    cout<<"After calling SolveRefrence function: "<<a<<endl;
    cout<<endl;

    //Returning pointer from function
    int* t=solve();
    cout<<t<<endl; //Address of local variable
    cout<<*t<<endl; //Address of local variable (Dangerous)
    
    return 0;
} 