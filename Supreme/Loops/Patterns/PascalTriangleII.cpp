#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(ans);
    // cout<<ans<<" ";
    for (int c = 1; c <=rowIndex; c++)
    {
        ans = ans * (rowIndex - c+1);
        ans = ans / c;
        // cout<<" "<<ans<<" ";
        ansRow.push_back(ans);
    }
    return ansRow;
    }
int main()
{
   int n = 3;
   vector<int> ans = getRow(n);
   for(int x:ans){
    cout<<x<<" ";
   }
   cout<<endl;
    return 0;
}