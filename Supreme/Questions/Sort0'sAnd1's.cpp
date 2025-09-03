#include <bits/stdc++.h>
using namespace std;
int SortArray(int arr[], int n)
{
    int i = 0;
    int start = 0;
    int end = n - 1;
    while (i<= end)
    { 
        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            i++;
            start++;
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
             
            // i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[] = {0, 1, 0, 1, 1, 0, 0, 1, 0};
    int arr2[] = {1, 1, 0, 0, 0, 1};
    int n = 6;
     cout << "Sorted Array is: ";
    int ans = SortArray(arr2, n);
   
    return 0;
}