#include<bits/stdc++.h>
using namespace std;
void printMiddle(stack<int> s, int size){
    if(s.size()==0){
        cout<<"Stack is Empty"<<endl;
    }
    if(s.size()==size/2+1){
        cout<<"Middle Element is: "<<s.top()<<endl;
        return;
    }

    int temp = s.top();
    s.pop();

    printMiddle(s,size);

    s.push(temp);
   
}
int main(){
    stack<int> s;
    
    s.push(10);
    s.push(20); 
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int totalSize = s.size();
    printMiddle(s,totalSize);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}