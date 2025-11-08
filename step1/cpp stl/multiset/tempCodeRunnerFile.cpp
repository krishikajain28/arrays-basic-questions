#include <bits/stdc++.h>
using namespace std;

int main() {

    // how multiset is different from set
    // multiset only follows the sorted rule of set
    // it allows having duplicate elements in a multiset
    // unlike set which only allows unique elements
    // multiset is implemented as a balanced binary search tree (usually a red-black tree)
    
    multiset<int> ms;

    // now imagine you have the following multiset:
    // 1 1 1 1
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    // if you erase 1 directly, it will erase all the 1s
    ms.erase(1);
    
    cout << "Multiset elements after erasing 1: ";
    for (auto it : ms) {
        cout << it << " ";
    }
    cout << endl;
    cout << "hogaya" << endl;

    // the above will print nothing because all the 1s are erased

    // if you want to erase only one occurrence of 1, do it like this:
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(ms.find(1)); // this will erase only one 1 from the multiset

    cout << "Multiset elements after erasing one 1: ";
    for (auto it : ms) {
        cout << it << " ";
    }
    cout << endl;
    // the above will print: 1 1 1

    // inserting more elements
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);

    cout << "Multiset elements: ";
    for (auto it : ms) {
        cout << it << " ";
    }
    cout << endl;

    cout << "Size of multiset: " << ms.size() << endl;
    cout << "Max size of multiset: " << ms.max_size() << endl;
    cout << "Empty or not: " << (ms.empty() ? "Yes" : "No") << endl;

    cout << "Count of 2: " << ms.count(2) << endl;
    cout << "Count of 4: " << ms.count(4) << endl;

    // checking find carefully
    auto it2 = ms.find(2);
    if (it2 != ms.end())
        cout << "Find 2: " << *it2 << endl;
    else
        cout << "2 not found" << endl;

    auto it4 = ms.find(4);
    if (it4 != ms.end())
        cout << "Find 4: " << *it4 << endl;
    else
        cout << "4 not found" << endl;

    // lower bound
    auto lb = ms.lower_bound(2);
    if (lb != ms.end())
        cout << "Lower bound of 2: " << *lb << endl;
    else
        cout << "Lower bound not found" << endl;

    // upper bound
    auto ub = ms.upper_bound(2);
    if (ub != ms.end())
        cout << "Upper bound of 2: " << *ub << endl;
    else
        cout << "Upper bound not found" << endl;

    // equal range
    auto range = ms.equal_range(2);
    cout << "Equal range of 2: ";
    if (range.first != ms.end()) cout << *range.first << " ";
    if (range.second != ms.end()) cout << *range.second;
    cout << endl;

    // erase all 2s
    cout << "Erase 2: " << ms.erase(2) << endl;

    cout << "Multiset elements after erasing all 2s: ";
    for (auto it : ms) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
