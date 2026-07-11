#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);


    cout<<"Size of Queue is: "<<q.size()<<endl;
    cout<<"Front Element of Queue is: "<<q.front()<<endl;
    cout<<"Back Element of Queue is: "<<q.back()<<endl;

    q.pop();
    cout<<"Size of Queue is: "<<q.size()<<endl;
    cout<<"Front Element of Queue is: "<<q.front()<<endl;


    if(q.empty()){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Queue is not Empty"<<endl;
    }
    
    return 0;
}