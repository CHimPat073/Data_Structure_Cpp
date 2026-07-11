#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int *arr;
    int front;
    int back;
    int size;
    
    Queue(int size){
        arr= new int[size];
        this->size=size;
        front=0;
        back=0;
    }
    
    void push(int data){
        if (back==size){
            cout<<"Queue is Full"<<endl;
        }
        else{
            arr[back]=data;
            back++;
        }
    }
    void pop(){
        if(front==back){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==back){
                front=0;
                back=0;
            }
        }
    }
    void getFront(){
        if(front==back){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            cout<<"Front Element is: "<<arr[front]<<endl;
        }
    }
    void getBack(){
        if(front==back){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            cout<<"Back Element is: "<<arr[back-1]<<endl;
        }
    }
    void isEmpty(){
        if(front==back){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            cout<<"Queue is not Empty"<<endl;
        }
    }


};
int main(){
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.getFront();
    q.getBack();
    
    q.isEmpty();
    return 0;
}