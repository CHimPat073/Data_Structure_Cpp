#include<bits/stdc++.h>
using namespace std;
class Maths{
    public:
    int add(int a,int b){
        return a+b;
    }
    int add(int a,int b,int c){
        return a+b+c;
    }
    int add(int a, float b){
        return a+b;
    }
};
//Operator Overloading
class Complex{
    public:
    int  val;
    
    void operator+(Complex& obj2){
        int val1=this->val;
        int val2=obj2.val;
        cout<<(val1-val2)<<endl;

    }

};
int main(){
    Maths m;
    cout<<m.add(1,2)<<endl;
    cout<<m.add(1,2,3)<<endl;
    cout<<m.add(1,2.5f)<<endl;
    cout<<endl;


    Complex obje1,obje2;
    obje1.val=40;
    obje2.val=20;
    //Print the Difference 
    obje1 + obje2;

    return 0;
}