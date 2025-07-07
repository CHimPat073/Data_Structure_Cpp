#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
//     for(int i=0;i<n;i+=1){
//         for(int j=0;j<i+1;j+=1){
//             cout<<j+1<<" ";

//         }
//     cout<<endl;
// }


//Inverted Num pyramid
for(int i=0;i<n;i+=1){
        for(int j=0;j<n-i;j+=1){
            cout<<j+1<<" ";
        }
    cout<<endl;
    }
    return 0;
}