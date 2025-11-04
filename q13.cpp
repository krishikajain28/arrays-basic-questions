#include <bits/stdc++.h>
using namespace std;

// q13. find the missing number in the array
// problem:
// you will be given an array of size n-1 containing distinct elements
// ranging from 1 to n
// one number will be missing from the range 1 to n
// example:
// array = {1, 2, 4, 5}, n = 5
// the missing number here is 3

int missingNumberB(vector<int> &a, int n)
{
    // so bruteforce is basically linearsearch of m
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1; // fallback, shouldnt happen
}

int missingNumberBe(vector<int> &a, int n)
{
    // you use hashing here

    vector<int> ha(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < n)
        {
            ha[a[i]] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (ha[i] == 0)
        {
            return i;
        }
    }

    // tc: O(2n) worst cases
    // sc: O(n+1) so basically O(n)
}

int missingNumberO(vector<int> &a, int n)
{
    // has 2 optimal solutions
    // 1. sum
    // 2. xor

    // 1. sum -
    // as we know,
    // the formula to sum of first n natural numbers: n(n+1)/2

    // so if n = 5
    // 5(5+1)/2 = 15
    // therefore, summation of first 5 natrual numbers: 15
}

int main()
{

    vector<int> a = {1, 2, 4, 5};
    int n = 5;

    int m = missingNumberBe(a, n);

    cout << "Missing num: " << m;
}
