#include<bits/stdc++.h>
using namespace std;
 int FindStudent(vector<int> &arr, int pages){
        int student=1,pagesStudent=0;
        for(int i=0;i<arr.size();i++){
            if(pagesStudent+arr[i]<=pages){
                pagesStudent+=arr[i];
            }
            else{
                student++;
                pagesStudent=arr[i];
            }
        }
        return student;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int s=*max_element(arr.begin(),arr.end());
        int e=accumulate(arr.begin(),arr.end(),0);
        int n=arr.size();
        if(n<k) return -1;
        
        while(s<=e){
            int mid= s+(e-s)/2;
            if(FindStudent(arr,mid)>k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return s;
    }
int main(){
     vector<int> arr={25,46,28,49,24};
     int k=4;
     cout<<findPages(arr,k);
    return 0;
}