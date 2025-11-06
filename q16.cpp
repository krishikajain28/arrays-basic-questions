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

vector<int> longestSubarrayWithSumKB(vector<int> &a)
{
    // brutforce approach OFCC
}

vector<int> longestSubarrayWithSumKBe(vector<int> &a)
{
    int n = size.a();
}

vector<int> longestSubarrayWithSumKO(vector<int> &a)

{
    int n = size.a();
}

int main()
{
    vector<int> a = {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1};

    int m = longestSubarrayWithSumKB(a);

    cout << "The ans : " << m;
}
