#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(3);   

    auto it=st.find(2);
    // cout<<*it;
    int cnt = st.count(2);
    int cnt1 = st.count(4);
    cout<<cnt<<" "<<cnt1<<endl; 
    st.erase(2);
    int cnt3 = st.count(2);
    cout<<cnt3;

    return 0;
}