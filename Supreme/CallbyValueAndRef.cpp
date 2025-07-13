#include<iostream>
using namespace std;
int sum (int a, int b){
    int c=a+b;
    return c;
}
//This will not  swap a and b. CallByValue 
int swap(int a, int b){
    int temp =a;
    a=b;
    b=temp;
}

// CallByRefrence Using Pointer
int swappointer(int* a, int* b){
    int temp =*a;
    *a=*b;
    *b=temp;
}

//CallByRefrence using refrence varaible
void  swapRefrence(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
int main(){
    int a=4, b=5;
    cout<<"The value before swapping is "<<endl<<a<<endl<<b<<endl;
    //swap(a,b);   //this will not swap  a and b
    // swappointer(&a,&b);  //This will swap a and b using pointer refrence
    swapRefrence(a,b);
    cout<<"The value after swapping is "<<endl<<a<<endl<<b<<endl;
    cout<<"The sum of 4 and 5 is "<<sum(a,b)<<endl;
    return 0;
}
