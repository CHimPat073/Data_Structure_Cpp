#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);
    cout<<v[1];
    vector<int> v1(5.20);
    v1.push_back(10);
   
    cout<<v1[5]<<endl;
    
    // Iterators
    vector<int> ::iterator it;
    it=v.begin();
    cout<<*it<<endl; // Output the first element of vector v
    for(it;it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // Shortcut
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1);
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    // Insert
    vector <int> v2(3,10);
    v2.insert(v2.begin(),20);
    v2.insert(v2.begin()+1,2,15);
    vector<int> vcopy(2,5);
    v2.insert(v2.begin()+2,vcopy.begin(),vcopy.end());
    for(auto it=v2.begin();it!=v2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
//Size
    cout<<v2.size()<<endl;
 v2.pop_back(); // Removes the last element
    cout<<v2.size()<<endl;





    return 0;
}