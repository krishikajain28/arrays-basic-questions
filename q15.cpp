#include <bits/stdc++.h>
using namespace std;

// q15. find the numbers that appears once, and the others twice
// meaning
// u have an array like: {1,1,2,3,3,4,4,5,5}
// the other numbers, other than 2 appears twice
// but number 2 only appears once

// there are 2 bruteforce solution to this
// b1 and b2

int findNumbersOnceB1(vector<int> &a)
{
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == a[i])
            {
                c++;
            }
        }
        if (c == 1)
        {
            return a[i];
        }
    }
    return -1;
}

int findNumbersOnceB2(vector<int> &a) // bruteforce 2 solution , similar to that missing number in an array qsn
{
    int n = a.size();

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (i != j && a[i] == a[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            return a[i];
        }
    }

    return -1; // fallback

    // tc: O(n^2)
    // sc: O(1)
}
// both b1 and b2 basically do the same job
// the only difference is that
// one counts how many times each number appears
//  while the other skips duplicate (i & j) comparisons and hecks if another match exists
// if it does, the flag turns true
// if not it stays false

int findNumbersOnceBe1(vector<int> &a)
{

    // hashing ofc
    int n = a.size();

    int maxi = 0;
    for (int i = 0; i < n; i++) // so this loopends up taking O(n)
    {
        maxi = max(maxi, a[i]);
    }

    vector<int> h(maxi + 1, 0);

    for (int i = 0; i < n; i++) // and this too take O(n)
    {
        h[a[i]]++;
    }

    for (int i = 0; i < n; i++) // and this takes O(n) again
    {
        if (h[a[i]] == 1)
        {
            return a[i];
        }
    }
    return -1;

    // so the total tc: O(3n)
}

int findNumbersOnceBe2(vector<int> &a)
{
    // this is the map one
    // map is a data structure that stores data w key and value pairs

    // so for this questn,
    // map stores data
}

int findNumbersOnceO(vector<int> &a)
{
}

int main()
{
    vector<int> a = {1, 1, 2, 3, 3, 4, 4, 5, 5};

    int m = findNumbersOnceBe1(a);

    cout << "The numb appearing once in the array is: " << m;
}
