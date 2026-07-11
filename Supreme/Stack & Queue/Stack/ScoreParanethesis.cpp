#include<bits/stdc++.h>
using namespace std;
int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('){
                st.push(0);
            }
            else{
                int temp =st.top();
                st.pop();

                int score;
                if(temp==0){
                    score=1;
                }
                else{
                    score=2*temp;
                }
                st.top()+=score;
            }
        }  
        return st.top();  
    }
int main(){
    string s;
    cin>>s;
    cout<<scoreOfParentheses(s);
    return 0;
}