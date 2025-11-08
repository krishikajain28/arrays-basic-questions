#include <bits/stdc++.h>
using namespace std;

int main()
{
    // A `set` stores unique elements in **sorted** order.
    // Internally, it's usually implemented using a Balanced BST like Red-Black Tree.

    // 🔹 Declaration
    set<int> s;

    // 🔹 Initialization with elements
    set<int> s1 = {1, 2, 3, 4, 5};

    // 🔹 Copying elements from one set to another (using iterators)
    set<int> s2(s1.begin(), s1.end()); // set<data_type> set_name(set1.begin() , set1.end())
    //  set<int> s2( s1.begin(), s[3]  )

    cout << "\nStarting element: " << *s1.begin() << endl; // o/p: s[0]

    // 🔹 Inserting duplicate and random order elements into set
    s.insert(1);
    s.insert(2);
    s.insert(1); // duplicate, won't be inserted
    s.insert(4);
    s.insert(3);
    s.insert(7);
    s.insert(5);
    s.insert(6);

    cout << "Set s (after inserting values): ";
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;

    // 🔹 Demonstrating that set does NOT store duplicates and keeps everything sorted
    // Output will be: 1 2 3 4 5 6 7

    // 🔹 Finding an element in set
    auto it = s1.find(5); // will return iterator to 5 if found, else s1.end()

    if (it != s1.end())
    {
        cout << "Element 5 found in s1: " << *it << endl;
    }
    else
    {
        cout << "Element 5 not found in s1" << endl;
    }

    // 🔹 Trying to find an element not present
    auto it2 = s1.find(6); // 6 is not in s1

    if (it2 != s1.end())
    {
        cout << "Element 6 found in s1: " << *it2 << endl;
    }
    else
    {
        cout << "Element 6 not found in s1: " << endl;
    }

    // 🔹 Erasing an element from set
    s.erase(3); // removes 3 from set s
    cout << "Set s (after erasing 3): ";
    for (auto it : s)
    {
        cout << it << " ";
    }

    cout << endl;

    // 🔹 Checking if set is empty

    if (s.empty())
    {
        cout << "Set s is empty" << endl;
    }
    else
    {
        cout << "Set s is not empty" << endl;
    }

    // 🔹 Getting the size of the set
    cout << "Size of set s: " << s.size() << endl;

    // 🔹 Clearing the set
    s.clear(); // removes all elements from set s

    cout << "Set s (after clearing): ";
    for (auto it : s)
    {
        cout << it << " ";
    }

    cout << endl;
    set<int> set1 = {1, 2, 3, 4, 5};

    // more set functions
    // 🔹 Lower bound: returns the first element that is not less than the given value
    auto it3 = set1.lower_bound(3); // returns iterator to 4
    cout << "Lower bound of 3 in set1: " << *it3 << endl;

    // 🔹 Upper bound: returns the first element that is greater than the given value
    auto it4 = set1.upper_bound(3); // returns iterator to 4
    cout << "Upper bound of 3 in set1: " << *it4 << endl;

    // 🔹 Count: returns the number of elements that are equal to the given value
    // int sanika =  // returns 1 (since 4 is present)
    cout << "Count of 4 in set1: " << set1.count(4) << endl;

    // 🔹 Swap: swaps the contents of two sets
    set<int> set2 = {6, 7, 8};
    cout << "Set1 before swap: ";
    for (auto it : set1)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Set2 before swap: ";
    for (auto it : set2)
    {
        cout << it << " ";
    }
    cout << endl;

    set1.swap(set2); // swaps contents of set1 and set2
    cout << "Set1 after swap: ";
    for (auto it : set1)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << "Set2 after swap: ";
    for (auto it : set2)
    {
        cout << it << " ";
    }
    cout << endl;

    // 🔹 Set intersection: returns a new set with elements that are in both sets
    set<int> set3 = {1, 2, 3};
    set<int> set4 = {3, 4, 5};
    set<int> intersection;
    set_intersection(set3.begin(), set3.end(), set4.begin(), set4.end(), inserter(intersection, intersection.begin()));
    cout << "Intersection of set3 and set4: ";
    for (auto it : intersection)
    {
        cout << it << " ";
    }
    cout << endl;

    // 🔹 Set union: returns a new set with elements that are in either set
    set<int> unionSet;
    set_union(set3.begin(), set3.end(), set4.begin(), set4.end(), inserter(unionSet, unionSet.begin()));
    cout << "Union of set3 and set4: ";
    for (auto it : unionSet)
    {
        cout << it << " ";
    }

    cout << endl;

    // 🔹 Set difference: returns a new set with elements that are in set3 but not in set4

    set<int> differenceSet;
    set_difference(set3.begin(), set3.end(), set4.begin(), set4.end(), inserter(differenceSet, differenceSet.begin()));
    cout << "Difference of set3 and set4: ";
    for (auto it : differenceSet)
    {
        cout << it << " ";
    }

    cout << endl;

    // 🔹 Set symmetric difference: returns a new set with elements that are in either set but not in both
    set<int> symDifferenceSet;
    set_symmetric_difference(set3.begin(), set3.end(), set4.begin(), set4.end(), inserter(symDifferenceSet, symDifferenceSet.begin()));
    cout << "Symmetric difference of set3 and set4: ";
    for (auto it : symDifferenceSet)
    {
        cout << it << " ";
    }

    cout << endl;

    // 🔹 Set comparison: checks if two sets are equal
    set<int> set5 = {1, 2, 3};
    set<int> set6 = {1, 2, 3};

    if (set5 == set6)
    {
        cout << "set5 and set6 are equal" << endl;
    }
    else
    {
        cout << "set5 and set6 are not equal" << endl;
    }

    // 🔹 Set comparison: checks if one set is a subset of another
    set<int> set7 = {1, 2};
    set<int> set8 = {1, 2, 3, 4, 5};
    if (includes(set8.begin(), set8.end(), set7.begin(), set7.end()))
    {
        cout << "set7 is a subset of set8" << endl;
    }
    else
    {
        cout << "set7 is not a subset of set8" << endl;
    }

    return 0;
}
