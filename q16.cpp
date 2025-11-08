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

vector<int> longestSubarrayWithSumKB1(vector<int> &a, int k)
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

    // but tc: O(n^3)
    // and sc: O(0)

    // so we move to brutforce2
}

vector<int> longestSubarrayWithSumKB2(vector<int> &a, int k)
{

    int n = a.size();
    int len = 0;
    vector<int> sa = {};

    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = i; j < n; j++)
        {
            s += a[j];

            if (s == k && j - i + 1 > len)
            {
                len = j - i + 1;
                sa.assign(a.begin() + i, a.begin() + j + 1);
            }
        }
    }
    return sa;

    // but tc: O(n^2)
    // and sc: O(0)

    // so we move to better
}

int longestSubarrayWithSumKBe(vector<int> &a, int k)
{
    // hashingggg

    // logic :
    // imagine a map ds storing the sum of as we move on
    // if [ . . . . . ] whole length is x and after the 3 dota 4th n 5th dot length is  = k then first three dots have legnth = x - k
    // so as we iterate the array we store the sum and check if its equal to k or not
    // and
    // we also check if previously it had sum = sum(i) - k  or not {sum(i) --> means sum till index i}

    // for ex,
    // if we have an array = { 1, 1, 2, 3, 1, 1, 1, 4 }
    // indexes =============>  0  1  2  3  4  5  6  7
    // and k = 4
    // and len = 0
    // after all iterations the map will look like

    // ____i________sum____
    // |   0     |   1    |
    // |   1     |   2    |
    // |   2     |   4    |
    // |   3     |   7    |
    // |   4     |   8    |
    // |   5     |   9    |
    // |   6     |   10   |
    // |___7_____|___14___|

    // so at i = 0, sum = 1
    // which is not == k so we move ahead
    // at  i = 1, sum= 2
    // at i = 2, sum = 4
    // which is want we need to now we know that from i = 0  to  i = 3, mean this length of subarray has a sum of 4
    // so we store len = 3 (3 indices)
    // thne we move ahead w i = 3 and sum = 7
    // here *we check not for 7 to be equal to 4 it need to be split in 4 and 3???*
    // which means we see if there was a sum == 3 before because if yes the further indices sum has to be 4 which is = k
    // but in this case we do not have a summ == 3 in the prev iterations so we moveahead
    // at i = 4, sum = 8
    // now for 8 to be 4 smh, we check if sum for 8 - 4 is there in the prev iteration or not
    // which means we check if sum == 4 is present or not
    // and yes there is we can see that till index 2 we have sum 4
    // so obv now from index 3 to the current index sum is gonna be 4 because their total sum is 8
    // and we check fi the len of this subarray is greater than the prevone
    // if yes we update the len and if no we dont
    // this is how we do OMGGGGGGGGGGGGGGGGGGGGG

    int n = a.size();
    unordered_map<long long, int> m = {};
    long long s = 0;
    int len = 0;

    for (int i = 0; i < n; i++)
    {
        s += a[i];

        if (s == k)
        {
            len = max(len, i + 1);
        }

        long long rem = s - k;
        if (m.find(rem) != m.end())
        {
            len = max(len, i - m[rem]);
        }

        if (m.find(s) == m.end()) // incase there arenegs and zeros there might be equality
        {
            m[s] = i;
        }
    }

    return len;

    // for negs and zeros this better solution is that optimal one
    // for pos we have an optimal solution

    //
    // tc:
    // ordered map: O(n logn) avg
    // unordered map: O(n) avg
    // unordered map: O(n^2)worst (hashing collisions)

    // sc:
    // O(n)
}

pair<vector<int>, int> longestSubarrayWithSumKO(vector<int> &a, int k)
{

    // thought process:
    // while moving to the right, as soon as we find that the sum becomes greater than the k ,then we trim one by the left
    int n = a.size();
    long long s = a[0];
    int j = 0;
    int i = 0;
    int len = 0;
    vector<int> sa = {};

    while (j < n)
    {
        if (i <= j && s > k)
        {
            s = s - a[i];
            i++;
        }

        if (s == k)
        {
            len = max(len, j - i + 1);
            sa.assign(a.begin() + i, a.begin() + j + 1);
        }

        j++;

        if (j < n)
        {
            s += a[j];
        }
    }
    pair<vector<int>, int> p = {sa, len};
    return p;
    // tc: O(2n) at the worst case
    // sc: O(1)
}

int main()
{
    vector<int> a = {1, 2, 0, 0, 0, 3, 1, 1, 1, 1, 4, 5, 9};
    int k = 5;

    pair<vector<int>, int> p = longestSubarrayWithSumKO(a, k);

    cout << "Longest subarray w summation " << k << " is: [ ";
    for (auto i : p.first)
    {
        cout << i << " ";
    }
    cout << "] has length: " << p.second;
}
