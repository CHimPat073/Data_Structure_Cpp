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
//Run time 
class Poly{
    public:
    Poly(){
        cout<<"Constructor Called"<<endl;
    }
    virtual void funA(){
        cout<<"Function A"<<endl;
    }
    
};
class RunTime: public Poly{
    public:
    RunTime(){
        cout<<"Constructor Called Sub"<<endl;
    }
    //Overriding
    void funA(){
        cout<<"Function A in a Run Time"<<endl;
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
    cout<<endl;

    //run-time
    // Poly p;
    // p.funA();
    // RunTime r;
    // r.funA();
    // Poly* a = new Poly();
    // a->funA();
    // RunTime* c = new RunTime();
    // c->funA();
    // //Upcasting
    // Poly* b = new RunTime();
    // b->funA();

    //Downcasting
    // RunTime* d =  new Poly();
    // d->funA();
    //Faat jaayega

    //RunTime* d = (RunTime*) new Poly();
    //ye nhi krega

    // Poly* a =new Poly();
    // a->funA();
    // RunTime* b = new RunTime(); //Dono call ho raha h cuz of Inheritance
    // b->funA();

    // Poly* c = new RunTime();
    // c->funA();



    
    cout<<endl;



    return 0;
}