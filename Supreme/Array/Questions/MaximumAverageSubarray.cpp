#include<bits/stdc++.h>
using namespace std;
double findMaxAverage(vector<int>& nums, int k) {
    double sum=0;
    int n=nums.size();
    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
        double maxi=sum;

        //Sliding Window with pointers
        int Start=0;
        int End=k;
        while(End<n){
            //removing the first element and adding the next element
            sum-=nums[Start];
            Start++;
            sum+=nums[End];
            End++;
            maxi=max(maxi,sum);
            
        }
        return maxi/k;
}
int main(){
    vector<int> arr={1,12,-5,-6,50,3};
    int k=4;
    cout<<findMaxAverage(arr,k);
    
    return 0;
}