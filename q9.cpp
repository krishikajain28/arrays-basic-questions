#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // q9: moving all zeros at the end

    // bruteforce?

    int movingAll0AtEnd(vector<int> &a, int n)
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
        }
    }
};

int main()
{

    int n = 10;
    vector<int> a = {3, 0, 45, 0, 97, 34, 0, 0, 11, 0};
    // final vec: {3, 45, 97, 34, 11, 0, 0, 0, 0 }

    Solution s;

    cout << "Array after moviing all 0s at the end : ";
    s.movingAll0AtEnd(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
