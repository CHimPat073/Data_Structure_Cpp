#include<bits/stdc++.h>
using namespace std;
int nthRoot(int n, int m) {
        // Code here
        if (m==0) return 0;
        for(int i=1;i<=m;i++){
            
             long long ans=pow(i,n);
             
             if(ans==m) return i;
             if(ans>m)break;
        }
        return -1;
}
int power(int x, int n){
    long long ans=1;
    for(int i=0;i<n;i++){
        ans*=x;
    }
    return ans;
}
int nthRoot2(int n, int m) {
    int s=1,e=m;
    while(s<=e){
        int m=s+(e-s)/2;
        long long ans=power(m,n);
        if(ans==m) return m;
        else if(ans<m)  s=m+1;
        else e=m-1;
    }
    return -1;
    
}
int main(){
    int n=4,m=69;
    int ans= nthRoot2(n,m);
    cout<<"The "<<n<<"th root of "<<m<<" is: "<<ans<<endl;
    return 0;
}