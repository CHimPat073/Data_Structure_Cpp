#include<bits/stdc++.h>
using namespace std;
/* 
This is GFG question
In this code the Logic is change he kth bit of a number 
We do this by using bitwise OR operation.
We create a mask by left shifting 1 by k positions.
Then we perform a bitwise OR operation between the number and the mask.
Eg:
n=10 Bin -> 1010
k=2
left shift 1(001) by 2 we get (0100)
Then we perform OR operation
1010|0100 =1110 (14)
*/
int Question1(int n ,int k){
    int  mask = 1<<k;
    int ans = n| mask;
    return ans;
}
int main(){
    int n, k;
    cout << "Enter the number: ";
    cin >> n;
    cout<<"Enter the bit position :";
    cin >> k;
    int result = Question1(n, k);
    cout << "The number after setting the " << k << "th bit is: " << result << endl;
    return 0;
}