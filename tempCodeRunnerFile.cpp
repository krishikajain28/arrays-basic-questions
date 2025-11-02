#incluce <bits/stdc++.h>
using namespace std;

// q10: linear search

int linearSearch(vector<int> &a, int x)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main
{
    vector a = {23, 77, 97, 68, 51, 39, 74, 03, 15, 83};

    int x;
    cout << "Enter the element you want to search: ";
    cin >> x;

    int ans = linearSearch(a, x);
    if (ans >= 0)
    {
        cout << "Element found at index", ans;
    }
    else
    {
        cout << "Element is not in array";
    }
}
