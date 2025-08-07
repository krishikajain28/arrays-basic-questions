#include <bits/stdc++.h>
using namespace std;

// q5: check whether the array is sorted or not
// this is the only bruteforce, optimal, better apporach for this questn

class Solution
{
public:                                     // vector<int> a
    bool sortedOrNot(vector<int> &a, int n) // 2 parameters
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                return false;
            }
        }
        return true;
    }

    // q6: remove duplicates from a sorted array

    // brute-force:
    // use a set to store unique elements
    // set only stores unique values, so it automatically skips any duplicates
    // after inserting all elements into the set:
    //   -its size gives you the count of unique elements
    //   -and if needed, you can copy those unique elements back to the array
    // this has a tc of n logn + n

    // optimal:
    // the 2 pointer method
    // appoint 2 pointers i and j , keeping i as the reliable one that counting on the uniques and j as the checking and comparing one
    // tc = simple one pass O(n)
    // sc O(1)

    int removeDuplicates(vector<int> &a, int n)
    {
        int i = 0;                  // { 1, 3, 7, 8, 7, 8}
        for (int j = 1; j < n; j++) //   0  1  2  3  4
        {                           //            i      j
            if (a[j] != a[i])
            {
                a[i + 1] = a[j];
                i++;
            }
        }
        return (i + 1);
    }
};

int main()
{

    int n = 5;
    vector<int> a = {1, 1, 3, 3, 7};

    Solution s;

    cout << boolalpha; // so that it converts 1 to true and 0 to false
    cout << "If sorted(true), if not(false) : " << s.sortedOrNot(a, n);

    int num = s.removeDuplicates(a, n);
    cout << "\nThe array has " << num << " unique elements. ";

    cout << "\nThe array after removing duplicates: ";
    for (int i = 0; i < num; i++)
    {
        cout << a[i] << " ";
    }

    // Time complexity for both operations: O(n). Space complexity: O(1).
}
