#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mp;
    map<int,pair<int,int>> mp1;
    mp[1] = 10;
    cout << "Value at key 1: " << mp[1] << endl;
    cout << "Value at key 0: " << mp[0] << endl; // Agar key nhi hai to default value 0 return karega
    mp.insert({3,1});
    cout << "Value at key 3: " << mp[3] << endl;
    mp1[4]={3,2};

    //iterators
    for(auto it:mp){
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }
    auto it1 = mp.find(1);
    // cout<< *(it1)<<endl; // it->second is also valid

    return 0;
}