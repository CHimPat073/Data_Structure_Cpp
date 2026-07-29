#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1); 
    st.push(2);
    st.push(3);  
    st.emplace(5);   

    cout<<st.top();
    st.pop(); 
    cout<<st.top()<<endl;
    cout<<st.size(); 
    st.empty(); // Returns true if stack is empty, false otherwise
    return 0;
}