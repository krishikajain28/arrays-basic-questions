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
// while the other skips duplicate (i & j) comparisons and hecks if another match exists
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
    // map stores data in keyvalue pairs
    // so the occurences of the number are stored at values and the keys are the numbers itself
    // normal map stores elements in a sorted order
    // an unordered map stores element as u put in (not sorted)
    // a multimap allows dupes too

    // u can say the intervier these info to get impressed
    // by the info i mean the tc for all

    // If the array has n elements, and all but one appear twice, the number of unique elements is roughly n/2 + 1.
    // so map size is roughly O(n/2 +1) times
    // and any loop that iterates over the map (like checking which key has a value of 1) will run roughly n/2 + 1 times, not n times

    // time complexity Detail:

    // for an ordered map (map):
    // tc : O(n log (n/2 + 1)) + O(n/2 + 1)  which approximately is O(n log n)
    // sc : O(n/2 + 1)

    // For unordered map:
    // tc : O(n)
    // sc : O(n/2 + 1)
    // but for worst cases in this O(n^2) might happen due to hashing collisions

    unordered_map<int, int> m; // faster on average
    for (int x : a)
        m[x]++;

    for (auto &p : m)
        if (p.second == 1)
            return p.first;

    return -1;
}

int findNumbersOnceO(vector<int> &a)
{
    // optimal approach
    // u just do  xor ofall elements and the one left will be single obv so it will be its ans ultimately
    int xor = 0;
    for (auto num : a)
    {
        xor^= num;
    }
    return x;

    // tc: O(n)
    // sc: O(1)
    // #the best
}

int main()
{
    vector<int> a = {1, 1, 2, 3, 3, 4, 4, 5, 5};

    int m = findNumbersOnceO(a); // change B1, B2, Be1, Be2, O acc to needs

    cout << "The numb appearing once in the array is: " << m;
}

// Summary table
// | Function | Technique           | TC                | SC      |
// | -------- | ------------------- | ----------------- | ------- |
// | B1       | brute force (count) | O(n²)             | O(1)    |
// | B2       | brute force (flag)  | O(n²)             | O(1)    |
// | Be1      | hashing via vector  | O(n)              | O(maxi) |
// | Be2      | hashing via map     | O(n log n) / O(n) | O(n)    |
// | O        | XOR trick           | O(n)              | O(1)    |
