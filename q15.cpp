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
        int num = a[i];
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == num)
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

int findNumbersOnceBe(vector<int> &a)
{
    int m;
    return m;
}

int findNumbersOnceO(vector<int> &a)
{
    int m;
    return m;
}

int main()
{
    vector<int> a = {1, 1, 2, 3, 3, 4, 4, 5, 5};

    int m = findNumbersOnceB1(a);

    cout << "The numb appearing once in the array is: " << m;
}
