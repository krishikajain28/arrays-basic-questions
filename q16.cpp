#include <bits/stdc++.h>
using namespace std;

// q16. longest subarray w sum K
// meaning taking example : {1,2,1,1,1,1,2,4,3,5,1,2,3}
// let k be 4
// subarray: a CONTIGIOUS part of an array
// the subarrays that can add up to k form the given array can be:
// [1,2,1]
// [2,1,1]
// [1,1,1,1]
// [1,1,2]
// [4]
// but the longest of all is [1,1,1,1]
// therefore the ans array is : [1,1,1,1]

vector<int> longestSubarrayWithSumKB(vector<int> &a, int k)
{
    // brutforce approach OFCC

    // this will generate all sub arrays
    // and check if their sum is equal to k
    // if yes then it ll check among those which ones the longesttt

    int n = a.size();
    int len = 0;
    vector<int> sa = {};

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int s = 0;
            for (int m = i; m <= j; m++)
            {
                s += a[m];
            }

            if (s == k && j - i + 1 > len)
            {
                len = j - i + 1;
                sa.assign(a.begin() + i, a.begin() + j + 1);
            }
        }
    }
    return sa;
}

vector<int> longestSubarrayWithSumKBe(vector<int> &a)
{
    int n = a.size();
}

vector<int> longestSubarrayWithSumKO(vector<int> &a)

{
    int n = a.size();
}

int main()
{
    vector<int> a = {1, 2, 3, 1, 4, 1, 1, 1, 1, 1, 1, 1, 5, 9};
    int k = 32;

    vector<int> l = longestSubarrayWithSumKB(a, k);
    cout << "Longest subarray w summation " << k << " is: [ ";
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << "]";
}
