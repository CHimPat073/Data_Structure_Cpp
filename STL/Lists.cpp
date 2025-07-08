#include<bits/stdc++.h>
using namespace std;

void List(){
    list<int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
}
int main(){
    List();
    return 0;
}