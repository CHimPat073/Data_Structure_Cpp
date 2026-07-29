#include<bits/stdc++.h>
using namespace std;

void Dequue(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.front();

    cout<<dq[0]<<dq[1]<<dq[2]<<endl; // Output the second element of deque dq
    // for(auto it=dq.begin();it!=dq.end();it++){
    //     cout<<*it<<" ";
    // }
}
int main(){
    
    return 0;
}