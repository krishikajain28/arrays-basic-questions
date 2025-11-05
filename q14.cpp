#include <bits/stdc++.h>
using namespace std;

// q14. maximum consecutive one's
// means to find maximum consecutive 1's in an array
// for ex : {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1}
// maximum consecutive ones: 3

int max1(vector<int> &a)
{
    int n = a.size();

    int c = 0;
    int m = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            c++;
            m = max(m, c); // max function says: keep m updated to the larger of the two: the current max streak (m) or the current running streak (c)
        }
        else
        {
            c = 0;
        }
    }
    return m;
}

int main()
{
    vector<int> a = {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1};

    int mc = max1(a);
    cout << "The max consc 1 in array is: " << mc;
}
