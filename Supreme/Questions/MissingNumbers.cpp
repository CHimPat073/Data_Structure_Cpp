#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1;
}
// Better Approach
int missingNumber2(vector<int> &nums)
{
    int n = nums.size();
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[nums[i]] = 1;
    }
    for (int i = 0; i <= n; i++)
    {
        if (hash[i] == 0)
            return i;
    }
    return -1;
}
int missingNumber3(vector<int> &nums)
{
    int n = nums.size();
    int sum = (n * (n + 1) / 2);
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum2 += nums[i];
    }
    return (sum - sum2);
}
int missingNumber4(vector<int> &nums)
{
    int n = nums.size();
    int xor1 = 0 ;
    int xor2 = 0;
    int N = n - 1;
    for (int i = 0; i < N; i++)
    {
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}
int main()
{
    vector<int> arr = {3, 0, 1};
    cout << missingNumber(arr);
    cout << endl;
    cout << missingNumber2(arr);
    cout << endl;
    cout << missingNumber3(arr);
    cout << endl;   
    cout << missingNumber4(arr);
    return 0;
}