#include<bits/stdc++.h>
using namespace std;
bool removeBrackets(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch==')'){
            bool flag=false;
            while(!st.empty() && st.top()!= '('){
                char top=st.top();
                if(top=='+' || top=='-' || top=='*' || top=='/'){
                    flag=true;
                }
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
            if(flag==false){
                return true;
            }
        }
        else {
            st.push(ch);
        }
    }
    return false;
}
int main(){
    string s = "(a+b)";   

    if(removeBrackets(s)){
        cout<<"Redundant Brackets are present"<<endl;
    }
    else{
        cout<<"Redundant Brackets are not present"<<endl;
    }
    return 0;
}