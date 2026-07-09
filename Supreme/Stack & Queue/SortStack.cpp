
#include<bits/stdc++.h>
using namespace std;

void InsertSorted(stack<int>& s,int target){
    //base
    if(s.empty() || s.top()>=target){
        s.push(target);
        return;
    }
    int temp= s.top();
    s.pop();
    InsertSorted(s,target);
    s.push(temp);
}
void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp= s.top();
    s.pop();
    sortStack(s);
    InsertSorted(s,temp);
    s.push(temp);

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(30);
    s.push(5);

    sortStack(s);
    
    return 0;
}