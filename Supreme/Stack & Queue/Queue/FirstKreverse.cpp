#include<bits/stdc++.h>
using namespace std;
void reverseK(queue<int> &q,int k){
    stack<int> s;
    int cnt=0;
    int n=q.size();
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        cnt++;
        if(cnt==k){
            break;
        }
    }
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    cnt=0;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        q.push(temp);
        cnt++;
        if(cnt==n-k){
            break;
        }
    }

}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseK(q,3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}