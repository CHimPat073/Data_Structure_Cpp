#include<bits/stdc++.h>
using namespace std;
//Ques1
int findNcR(int n,int r){
    int res=1;
    n=n-1;
    r=r-1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
//Ques2
//Brute force approach O(n)
void RowPrint(int n){
    for(int c=1;c<=n;c++){
        cout<<findNcR(n,c)<<" ";
    }
}
//Better approach 
void RowPrint2(int n){
    int ans =1;
    cout<<ans<<" ";
    for(int c=1;c<n;c++){
        ans=ans*(n-c);
        ans=ans/c;
        cout<<" "<<ans<<" ";
    }
    cout<<endl;
}
void PrintTriangle(int N){
    for(int i=1;i<=N;i++){
        RowPrint2(i);
        cout<<endl;
    }
}
int main(){
    int ans = findNcR(5,3);
    cout<<ans<<endl;
    RowPrint(5);
    cout<<endl;
    RowPrint2(4);
    cout<<endl;
    PrintTriangle(6);
    return 0;
}