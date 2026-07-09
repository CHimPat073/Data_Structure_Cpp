#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& s,int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    int temp= s.top();
    s.pop();
    solve(s,target);
    s.push(temp);
}

void insertAtBottom(stack<int>& s){
    if(s.empty()){
        return;
    }
    int target= s.top();
    s.pop();
    solve(s,target);
    

}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    stack<int> st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);


    insertAtBottom(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}