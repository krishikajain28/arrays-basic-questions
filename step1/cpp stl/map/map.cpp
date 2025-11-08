#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Maps have 2 inputs:
    // 1st is key (unique) and 2nd is value (can be duplicate)
    // Maps are used to store key-value pairs.

    map<int, int> m;

    // Ways to insert in map
    m[1] = 3;
    m.emplace(1, 2);
    m.insert({1, 2});
    // m[{1,3}] = 2; // ❌ This is wrong for map<int,int> (commented out)

    cout << m[1];
    cout << endl;

    // If you want pair<int,int> as key, declare like this:
    map<pair<int, int>, int> mp;
    mp[{1, 3}] = 2;

    // Unordered map
    unordered_map<int, int> umap;
    umap[1] = 2;
    umap.emplace(1, 2);
    umap.insert({1, 2});
    // umap[{1,3}] = 2; // ❌ Again wrong for unordered_map<int,int> (commented out)

    // Multimap — allows duplicate keys
    multimap<int, int> mm;
    mm.insert({1, 2});
    mm.insert({1, 3});
    mm.insert({1, 4});

    cout << "Elements in multimap are:\n";
    for (auto it : mm)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << "My name is Krishi. ";

    return 0;
}
