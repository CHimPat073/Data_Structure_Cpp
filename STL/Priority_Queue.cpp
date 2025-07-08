#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq; 
    pq.push(1);
    pq.push(2); 
    pq.push(4);
    pq.emplace(5);
    pq.push(3);
    pq.push(10);

    cout<<pq.top()<<endl;

    //Pq that stores min element at top
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(1);
    pq1.push(2);         
    pq1.push(4);
    pq1.emplace(5);
    pq1.push(3);
    pq1.push(10);

    cout<<pq1.top()<<endl;   


    return 0;
}