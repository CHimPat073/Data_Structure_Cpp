#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int maxi=0;
    int n=prices.size();
    int minPrice=INT_MAX;
    for(int i=0;i<n;i++){
        minPrice=min(minPrice,prices[i]);
        maxi=max(maxi,prices[i]-minPrice);
    }
    return maxi;
        
}
int main(){
    
    return 0;
}