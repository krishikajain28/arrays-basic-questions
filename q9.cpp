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

    // bruteforce solution:
    vector<int> movingAll0AtEndb(vector<int> &a, int n)
    {
        vector<int> t = {};
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                t.push_back(a[i]);
            }
            else
            {
                count++;
            }
        }

        for (int i = 0; i < count; i++)
        {
            t.push_back(0);
        }
        return (t);

        // therefor
        // tc = 2n
        // sc = n
        // no better solution so we move to the optimal one
    }

    void movingAll0AtEndO(vector<int> &a, int n)
    {
        // two pointer method
        int j = -1;
        for (int i = 0; i < n; i++)
        {

            if (a[i] == 0)
            {
                j = i;
                break;
            }
        }
        for (int i = j + 1; i < n; i++)
        {

            if (a[i] != 0)
            {
                swap(a[j], a[i]);
                j++;
            }
        }
    }
}

;

int main()
{

    vector<int> a = {12, 75, 85, 0, 0, 34, 0, 90, 65, 24, 0, 0, 120, 0};
    int n = a.size();

    Solution s;

    cout << "Array before: ";
    for (auto i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    // bruteforce:
    // cout << "Array after (bruteforce) : ";
    // vector<int> temp = s.movingAll0AtEndb(a, n);

    // optimal
    cout << "Array after (opt) : ";

    s.movingAll0AtEndO(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
