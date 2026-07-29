#include<bits/stdc++.h>
using namespace std;

void Explainpair(){
    // pair<int , int> p={1,6};
    // cout<<"First element: "<<p.first<<endl;
    pair<int, pair<int, pair<int,int>>> p1={2,{3,{4,0}}};
    cout<<"First element of p1: "<<p1.second.second.first<<endl;
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<"First element of arr[1]: "<<arr[1].first<<endl;
}
int main(){
    Explainpair();
    return 0;
}