#include<bits/stdc++.h>
using namespace std;

int main(){
     int a =5;
     //pointer
     int* ptr =&a;

     cout<<a<<endl;
     cout<<&a<<endl;
     cout<<ptr<<endl; //Address of a
     cout<<*ptr; //Dereferencing
     cout<<&ptr<<endl; //Address of pointer 


    cout<<endl;
    cout<<endl;

    int b=10;
    int* p1=&b;
    cout<<sizeof(p1)<<endl;
    cout<<sizeof(*p1)<<endl;
    cout<<endl;

    char ch='b';
    char* p2=&ch;
    cout<<sizeof(p2)<<endl; 
    cout<<sizeof(*p2)<<endl;

    cout<<endl;

    double c=1.006;
    double* p3=&c;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(*p3)<<endl;


    cout<<endl;

    int z=5;
    z++;
    cout<<z<<endl;
    int* p4=&z;
    cout<<p4<<endl; 
    p4++;
    cout<<p4<<endl;
    cout<<*p4<<endl; //Garbage Value since there is no valid memory allocated
    cout<<endl;

    
    //cOPY pOINTER
    int x=9;
    int* p5=&x;
    int* p6=p5;
    cout<<p5<<endl;
    cout<<p6<<endl;
    cout<<*p5<<endl;
    cout<<*p6<<endl;
    return 0;
}