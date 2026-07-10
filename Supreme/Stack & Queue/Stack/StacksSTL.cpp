#include<bits/stdc++.h>
using namespace std;

int main(){
    //Creation
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(40);
    
    //remove
    st.pop();

    //Top
    cout<<st.top()<<endl;

    //size
    cout<<st.size()<<endl;

    //Check empty
    if(st.empty()){
        cout<<"Empty"<<endl;
    }else{
        cout<<"Not Empty"<<endl;
    }

    //print
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;

     
    return 0;
}