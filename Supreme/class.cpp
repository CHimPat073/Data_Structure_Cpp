#include<bits/stdc++.h>
using namespace std;
//Find the highest repeated letter in a string
vector<char> HighestRepatedletters(string str){
    int maxRepeat = 0;
    string ans = "";
    stringstream ss(str);
    string word;
    while (ss >> word) {
        

        unordered_map<char, int> mp;

    
        for (char ch : word) {
            mp[ch]++;
        }
        int repeated = 0;
        for (auto x : mp) {
            if (x.second > 1)
                repeated += x.second;
        }

        // Update answer
        if (repeated > maxRepeat) {
            maxRepeat = repeated;
            ans = word;
        }
    }

    if (maxRepeat == 0)
        cout << -1;
    else
        cout << ans;

}
//Reverse the words in a string alternatively from the first word
vector<char> Reversewords(){

}
//Given a int n , find the number of trailing zeros in n!
int TrailingZeros(int n){
    if(n<=4){
        return 0;
    }
    int count=0;
    while(n>=5){
        count+=n/5;
        n=n/5;
    }
    return count;
}
//Given N Consider a inifinite 
int Find NthDigit(int n){
    long digits=1;
    
}

int main(){
    string s;
    cin>>s;
    
    HighestRepatedletters(s);
    if(TrailingZeros(100)){
        cout<<TrailingZeros(100);
    }
    else{
        cout<<-1;
    }
    return 0;
}

