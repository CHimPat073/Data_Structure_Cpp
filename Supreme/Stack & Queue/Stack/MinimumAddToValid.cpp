#include<bits/stdc++.h>
using namespace std;
 int minAddToMakeValid(string s) {
        stack<int> st;
        int closing = 0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                st.push(ch);
            }else{
                if(st.empty()){
                    closing++;
                }else{
                    st.pop();
                }
            }

        }
        return st.size() + closing;
    }
int main(){
    string s="()))((";
    cout<<minAddToMakeValid(s);

    return 0;
}