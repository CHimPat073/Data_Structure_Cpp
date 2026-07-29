#include<bits/stdc++.h>
using namespace std;

vector<int> nextLargerElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(!st.empty()) {
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    return ans;
}

int main() {

    vector<int> arr = {6, 8, 0, 1, 3};

    vector<int> ans = nextLargerElement(arr);

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}