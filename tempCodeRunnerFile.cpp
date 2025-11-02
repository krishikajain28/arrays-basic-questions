#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // q9: moving all zeros at the end

    // bruteforce?
    // for bruteforce u just create a temp array and add all the non zeros into it by iterating through the prev array by n times
    // and put 0 acc to the size of the prev array (this part comes later as in d)
    // a[] = {2, 3, 6, 0, 9, 0, 3, 1, 0, 6} --> n   // tc = n
    // temp[] = saare non zeroes
    // temp.size() --> x
    // n - x --> zeroes                    // tc = n - x
    // temp[] --> a[]                      // tc = x
    // total tc --> n + n-x + x --> 2n
    // zeroes --> a[]
    // tc --> O(2n)
    // sc --> O(x)
    // sc --> worst case --> O(n)

    // {2, 3, 6, 0, 9, 0, 3, 1, 0, 6}

    int movingAll0AtEnd(vector<int> &a, int n)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 0)
            {
                int temp;
                for (int i = n; i > 0; i--)
                {
                    if (a[i] != 0)
                    {
                        temp = a[i];
                        a[i] = 0;
                    }
                }
                a[j] = temp;
            }
        }
    }
};

int main()
{

    int n = 10;
    vector<int> a = {3, 0, 45, 0, 97, 34, 0, 0, 11, 0, 0};
    // final vec: {3, 45, 97, 34, 11, 0, 0, 0, 0 }

    Solution s;

    cout << "Array after moviing all 0s at the end : ";
    s.movingAll0AtEnd(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
