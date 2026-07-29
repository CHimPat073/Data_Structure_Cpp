#include<bits/stdc++.h>
using namespace std;
void reverse1(queue<int> &q){
    stack<int> st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

}
void reverse2(queue<int> &q){
    if(q.empty()){
        return;
    }
    int temp=q.front();
    q.pop();
    reverse2(q);
    q.push(temp);
}
int main(){
    queue<int> q;

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverse1(q);
    cout<<"Stack Method"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    queue<int> q2;

    q2.push(3);
    q2.push(6);
    q2.push(9);
    q2.push(2);
    q2.push(8);
    
    reverse2(q2);
    cout<<"Recursive Method"<<endl;
     while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }

    return 0;
}