#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    vector<int> res;
    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        else
        {
            digits[i] = 0;
        }
    }
    if (digits[0] == 0)
    {
        digits.insert(digits.begin(), 1);
        return digits;
    }
}
int main()
{
    vector<int> arr = {9, 9, 9};
    plusOne(arr);
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}