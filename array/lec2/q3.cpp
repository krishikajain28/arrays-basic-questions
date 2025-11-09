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
    return -1;
}
int findMajorityBe(vector<int> &a)
{
    // hashing and storing the counts of OBV
    int n = a.size();

    unordered_map<int, int> umap;

    for (int i = 0; i < n; i++)
    {
        }
}

int findMajorityO(vector<int> &a)

{
    int n = a.size();
}

int main()
{
    vector<int> a = {4, 5, 3, 5, 3, 5, 3, 5, 5, 5, 3};

    int m = findMajorityB(a);

    cout << "The ans : " << m;
}
