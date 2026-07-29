#include<bits/stdc++.h>
using namespace std;
void FindMax(int arr[], int size, int i , int &max){ //& isliye liye hai kyuki yaha maxi local variable hai aur usko main function me 
    //bhi use karna hai to usko reference variable bana diya hai
    if(i>=size){
        return;
    }
    if (arr[i]> max){
        max=arr[i];
    }
    FindMax(arr,size,i+1,max);
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=5; 
    int i=0;
    int max= INT_MIN;

    FindMax(arr,size,i,max);
    cout<<"Maximum element in the array is: "<<max<<endl;
    return 0;
}