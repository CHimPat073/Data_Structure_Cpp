#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    int age;
    Animal(){
        cout<<"Constructor Called"<<endl;
    }
    ~Animal(){
        cout<<"Destructor Called"<<endl;
    }
};
int main(){
    cout<<"Object a called"<<endl;
    Animal a;
    a.age=5;
    cout<<"Object b called"<<endl;
    Animal *b=new Animal;
    b->age=10;
    delete b; //Destructor called here for dynamic memory allocation
    return 0;
}