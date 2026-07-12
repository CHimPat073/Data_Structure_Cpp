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
int main(){
    queue<int> q;

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverse1(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    // reverse2(q);

    return 0;
}