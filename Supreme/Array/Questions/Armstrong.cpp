#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
     int dup =n;
        int sum=0;
        int k = to_string(n).length();
        while(n>0){
            int rem=n%10;
            sum = sum+pow(rem, k);
            n/=10;
        }
        return sum == dup ? true : false;
}
int main(){
    int number = 371;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}