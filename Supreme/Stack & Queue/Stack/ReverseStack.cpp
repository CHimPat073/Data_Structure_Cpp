 #include<bits/stdc++.h>
using namespace std;
void InsertATBottom(stack<int>& s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp= s.top();
    s.pop();
    InsertATBottom(s,target);
    s.push(temp);
}
void ReverseStack(stack<int>& s){
    if(s.empty()){
        return;
    }
    int target= s.top();
    s.pop();
    ReverseStack(s);
    InsertATBottom(s,target);
    

}
int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    ReverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }   
    return 0;
}