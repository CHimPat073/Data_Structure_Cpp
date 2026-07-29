#include<bits/stdc++.h>
using namespace std;

int main(){
    array<int, 5> arr = {5,3,1,2,4};
    sort(arr.begin(), arr.end());
    cout << "Sorted array: "<<arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;

    //Sort in descending order
    sort(arr.begin(), arr.end(), greater<int>());
    cout << "Sorted array: "<<arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
    
    //permutation
    string s = "123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));

    //Max and Min
    cout << "Max element: " << *max_element(arr.begin(), arr.end()) << endl;
    cout << "Min element: " << *min_element(arr.begin(), arr.end()) << endl;

    return 0;
}