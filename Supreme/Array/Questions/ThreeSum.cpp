#include <bits/stdc++.h>
using namespace std;
vector<int> ThreeSum(int arr[], int n, int target)
{
    set<vector<int>> s;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    //sort(temp.begin(), temp.end());
                    s.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(s.begin(), s.end());
    return ans[0],ans[1],ans[2];
}
//brute force approach O(n^3)
// vector<vector<int>> threeSum(vector<int>& nums) {
//     set <vector<int>> s;
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(nums[i]+nums[j]+nums[k]==0){
//                    vector<int> temp ={nums[i],nums[j],nums[k]};
//                    sort(temp.begin(),temp.end());
//                    s.insert(temp);
//                 }
//             }
//         }
//     }    
//         vector<vector<int>> ans(s.begin(),s.end());
//         return ans;
//     }

//Better approach O(n^2)


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int target = 9;
    vector<int> ans = ThreeSum(arr, 6, target);
    cout << "Pair is: ";
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}