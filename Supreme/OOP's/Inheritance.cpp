#include<bits/stdc++.h>
using namespace std;
//Single Level Inheritance
class Animal{
    public:
    int age;
    int weight;

    void speak(){
        cout<<"Speaking"<<endl;
    }    
};
class Dog : public Animal{
    public: 
    void getAge(){
        cout<<"Age is: "<<age<<endl;
    }   
    void setAge(int age){
        this-> age=age;
    }
};

//Multi Level Inheritance
class Car{
    public:
    int price;
    void start(){
        cout<<"Car Started"<<endl;
    }

};
class BMW : public Car{
    public:
    void start(){
        cout<<"BMW Started"<<endl;
    }
};
class MSeries : public BMW{
    public:
    void start(){
        cout<<"M Series Started"<<endl;
    }
};

//Multiple Inheritance
class A{
    public:
    void funcB(){
        cout<<"Function A"<<endl;
    }
};
class B{
    public:
    void funcB(){
        cout<<"Function B"<<endl;
    }
};
class C : public A,public B{
    public:
    void funcC(){
        cout<<"Function C"<<endl;
    }
};

//herarchical Inheritance

class car{
    public:
    void start(){
        cout<<"Car Started"<<endl;
    }
};
class audi : public car{
    public:
    void audiStart(){
        cout<<"Audi Started"<<endl;
    }
};
class bmw : public car{
    public:
    void bmwStart(){
        cout<<"BMW Started"<<endl;
    }
};

int main(){
    //Single Level Inheritance
    Dog d1;
    d1.setAge(10);
    d1.getAge(); 
    cout<<endl;

    //ML Inheritance
    MSeries m;
    m.start();
    m.BMW::start();
    m.Car::start();
    m.price=10000000; 
    cout<<m.price<<endl;
    cout<<endl;

    //Multiple Inheritance

    C obj;
    //obj.funcB();
    //Diamond Problem
    obj.A::funcB();
    obj.B::funcB();
    obj.funcC();
    cout<<endl;

    //Hierarchical Inheritance
    audi a;
    a.start();
    a.audiStart();
    cout<<endl;
    bmw b;
    b.start();
    b.bmwStart();

    //Hybrid Inheritance is combination of two or more types of inheritance 

    return 0;
}