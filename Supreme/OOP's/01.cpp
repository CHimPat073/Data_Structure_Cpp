#include<bits/stdc++.h>
using namespace std;

class Animal{
    int weight;
    public:
    int age;
    string name;
     
    //deafult Constructor //ek by default call ho jata hai jab object banta hai but jab ye constructor banega to ye call hoga
    Animal(){
        this->weight=0; //good practice to initialize variables usinf this keyword
        cout<<"Constructor Called"<<endl;
    }

    //parameterized constructor
    Animal(int weight){
        this->weight=weight;
        cout<<"Parameterized Constructor Called"<<endl;
    }
    //copy constructor
    Animal(Animal &obj){
        this->weight=obj.weight;
        age=obj.age;
        
        cout<<"Copy Constructor Called"<<endl;
    }

    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout<<"So Raha Hai"<<endl;
    }
    int getWeight(){
        return weight;
    }
    void setWeight(int weight){
        //weight=w; 
        this->weight=weight;
    }
};

int main(){
    //static allocation
    Animal a;
    a.age=10;
    a.name="Lion";
    cout<<a.age<<endl;
    cout<<a.name<<endl;
    a.eat();
    a.sleep();
    a.setWeight(100);
    cout<<a.getWeight()<<endl;
    cout<<endl<<endl;

    //dynamic allocation
    Animal *b=new Animal;
    (*b).age=15;  
    b->name="Tiger";
    delete b; //free the memory

    Animal c(200); //parameterized constructor called
    cout<<c.getWeight()<<endl;
    cout<<endl;


    //copy constructor calling
    Animal l=*b;
    cout<<l.getWeight()<<endl;
    cout<<l.age<<endl; //default value 0
    cout<<l.name<<endl; //default value "" 
    cout<<endl<<endl;

    Animal d(*b);
    cout<<d.getWeight()<<endl;
    cout<<d.age<<endl;
    cout<<d.name<<endl; 



    return 0;
}