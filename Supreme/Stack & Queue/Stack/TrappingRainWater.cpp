#include<bits/stdc++.h>
using namespace std;
    vector<int> prefixMax(vector<int>& height){ 
        int n=height.size();
        vector<int> PrefixMax(n);
        PrefixMax[0]=height[0];
        for(int i=1;i<n;i++){
            PrefixMax[i]=max(PrefixMax[i-1],height[i]);
        }
        return PrefixMax;
    }
    vector<int> suffixMax(vector<int>& height){ 
        int n=height.size();
        vector<int> suffixMax(n);
        suffixMax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffixMax[i]=max(suffixMax[i+1],height[i]);
        }
        return suffixMax;
    }
    int trap(vector<int>& height) {
        int n =height.size();
        int total=0;

        vector <int> Leftmax=prefixMax(height);
        vector <int> Rightmax=suffixMax(height);
        for(int i=0;i<n;i++){
                total+=min(Leftmax[i],Rightmax[i])-height[i];
        }
        return total;

    }
int main(){
    vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height);
    
    return 0;
}