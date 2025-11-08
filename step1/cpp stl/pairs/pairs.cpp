#include <bits/stdc++.h> // includes all standard libraries
using namespace std;

// C++ STL is mainly divided into 4 parts:
// 1. Algorithms
// 2. Containers
// 3. Functions
// 4. Iterators

int main()
{

    // Pairs
    // Syntax: pair<data_type1, data_type2> name = {value1, value2};
    pair<int, int> p = {1, 3};

    // Accessing elements of the pair
    cout << "P ka first: " << p.first << endl;
    cout << "P ka second: " << p.second << endl;

    // Invalid:
    // cout << p;
    // You must print each part manually like above

    // nested pairs:

    pair<int, pair<int, int>> q = {1, {3, 4}};

    cout << "Q ka first: " << q.first << endl
         << "Q ke second ka first: " << q.second.first << "\nQ ke second ka second: " << q.second.second << endl;

    //  array  waale pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    // index :               0     1     2

    cout << arr[1].second;

    return 0;
}
