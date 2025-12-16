#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];
    cout<<arr[0]<<endl;

    cout<<&arr[0]<<endl; 
    cout<<&arr<<endl; //base address of array in above 3 statements
    cout<<arr<<endl;
    cout<<endl;

    //Using Pointers
    int* p=arr;
    cout<<p<<endl;
    cout<<&p<<endl; //Address of pointer
    cout<<endl;

    //Char Array
    char ch[6]="abcde";
    cout<<ch<<endl;
    cout<<&ch[0]<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<endl;

    char* p1= &ch[0];
    cout<<p1<<endl;
    cout<<&p1<<endl;
    cout<<*p1<<endl; //*p1=*(p1+0)
    cout<<endl;

    
    return 0;
}