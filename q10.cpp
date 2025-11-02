#include <bits/stdc++.h>
using namespace std;

// q10: linear search

int linearSearch(vector<int> &a, int x)
{

    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(vector<int> &a, int x)
{
    int l = 0;
    int u = a.size() - 1;
    int m = -1;

    while (l <= u)
    {
        m = (l + u) / 2;

        if (x == a[m])
        {
            return m;
        }
        if (x > a[m])
        {
            l = m + 1;
        }
        else
        {
            u = m - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> a = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    int x;
    cout << "Enter the element you want to search: ";
    cin >> x;

    int ans = binarySearch(a, x); // changeacc to u
    if (ans >= 0)
    {
        cout << "Element found at position: " << ans + 1;
    }
    else
    {
        cout << "Element is not in array";
    }
}
