#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>& bloomDay, int day , int m,int k){
    int n=bloomDay.size();
    int cnt=0;
    int bq=0;
    for(int i=0;i<n;i++){
        if(bloomDay[i]<=day){
            cnt++;
        }
        else{
            bq+=(cnt/k);
            cnt=0;
        }
    }
    bq+=(cnt/k);
    return bq>=m;
}
int minDays(vector<int>& bloomDay, int m, int k) {
    int n = bloomDay.size();
    if(n<m*k) return -1;
    int minDay=*min_element(bloomDay.begin(),bloomDay.end());
    int maxDay=*max_element(bloomDay.begin(),bloomDay.end());
    int s=minDay,e=maxDay;
    int ans=-1;
    while(s<= e){
        int mid =s+(e-s)/2;
        if(check(bloomDay,mid,m,k)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
       return ans;
}
int main(){
    vector <int> arr={7,7,7,7,13,11,12,7};
    int m=2,k=3;
    int ans=minDays(arr,m,k);
    cout<<"The Minimum days are: "<<ans<<endl;
    return 0;
}