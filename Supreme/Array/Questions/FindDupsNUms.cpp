#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    // O(nlogn) approach
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1;
}
int findDuplicate2(vector<int> &nums)
{
    // O(n) approach
    int n = nums.size();
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int index = abs(nums[i]);
        if (nums[index] < 0)
        {
            return index;
        }
        nums[index] *= -1;
    }
    return -1;
}
int findDuplicate3(vector<int> &nums)
{
    
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);

    }
    return nums[0];
}
int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};
    cout << findDuplicate(arr);
    cout << endl;
    cout << findDuplicate2(arr);
    cout << endl;
    cout << findDuplicate3(arr);
    return 0;
}