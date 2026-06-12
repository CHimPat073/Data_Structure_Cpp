#include<bits/stdc++.h>
using namespace std;
int floorSqrt(int n)  {
      int s=1,e=n;
      int ans=0;
      while(s<=e){
        long long m=s+(e-s)/2;
        if(m*m<=n){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
      }
      return e;
    }
int main(){
    int n=35;
    int ans= floorSqrt(n);
    cout<<"The square root of "<<n<<" is: "<<ans<<endl;
    return 0;
}