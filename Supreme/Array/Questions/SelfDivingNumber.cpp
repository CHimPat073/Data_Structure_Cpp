#include <bits/stdc++.h>
using namespace std;
vector<int> selfDividingNumbers(int left, int right)
{
    list<int> temp;
    for (int i = left; i <= right; i++)
    {
        int digit = i;
        while (digit > 0)
        {
            int d = digit % 10;
            if (d == 0 || i % d != 0)
            {
                break;
            }
            digit = digit / 10;
            if (digit == 0)
            {
                temp.push_back(i);
            }
        }
    }
    return vector<int>(temp.begin(), temp.end());
}

int main()
{
    vector<int> ans = selfDividingNumbers(22, 708);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

// if(i<10){
//     temp.push_back(i);
//     continue;
// }

// int digit1= i%10;
// int digit2=(i/10);
// if(digit1==0 || digit2==0) continue;
// if(i%digit1==0 && i%digit2==0){
//     temp.push_back(i);
// }