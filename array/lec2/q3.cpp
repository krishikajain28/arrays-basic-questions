#include <bits/stdc++.h>
using namespace std;

// q3: find the element w > n/2 frequency
// majority element

int findMajorityB(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
                c++;
        }
        if (c > n / 2)
            return a[i];
    }
}
w2e int findMajorityBe(vector<int> &a)
{
    int n = a.size();
}

int findMajorityO(vector<int> &a)

{
    int n = a.size();
}

int main()
{
    vector<int> a = {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1};

    int m = findMajorityB(a);

    cout << "The ans : " << m;
}
