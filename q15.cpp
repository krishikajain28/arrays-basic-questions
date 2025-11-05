#include <bits/stdc++.h>
using namespace std;

// q15. find the numbers that appears once, and the others twice
// meaning
// u have an array like: {1,1,2,3,3,4,4,5,5}
// the other numbers, other than 2 appears twice
// but number 2 only appears once

int onceB(vector<int> &a) // bruteforce solution , similar to that missing number in an array qsn

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

int

    int
    main()
{
    vector<int> a = {1, 1, 2, 3, 3, 4, 4, 5, 5};

    int m = once(a);

    cout << "The numb appearing once in the array is: " << m;
}
