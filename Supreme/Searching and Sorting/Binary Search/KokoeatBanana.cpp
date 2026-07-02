#include<bits/stdc++.h>
using namespace std;
long long CalTotalHrs(vector<int>& piles,int speed){
        long long totalhrs=0;
        for(int i=0;i<piles.size();i++){
            int ans=ceil((double)piles[i]/speed);
            totalhrs+=ans;
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;
        int e=*max_element(piles.begin(),piles.end()) ;
        int ans=e;
        while(s<=e){
            int m=s+(e-s)/2;
            long long totalhrs=CalTotalHrs(piles,m);
            if(totalhrs<=h){
                ans=m;
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        return ans;
    }
int main(){
    int h=8;
    vector<int> piles={3,6,7,11};
    int ans=minEatingSpeed(piles,h);
    cout<<"Minimum eating speed: "<<ans<<endl;
    return 0;
}