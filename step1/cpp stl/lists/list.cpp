#include <bits/stdc++.h>
using namespace std;

int main(){
    // lists in C++

    list<int> l1; // empty list
    list<int> l2(5, 100); // list of size 5 with all elements as 100
    list<int> l3(l2.begin(), l2.end()); // copy constructor using iterators
    list<int> l4(l3); // copy constructor

    cout << "l1: ";
    for(auto i : l1) cout << i << " ";
    cout << endl;

    cout << "l2: ";
    for(auto i : l2) cout << i << " ";
    cout << endl;

    cout << "l3: ";
    for(auto i : l3) cout << i << " ";
    cout << endl;

    cout << "l4: ";
    for(auto i : l4) cout << i << " ";
    cout << endl;

    // inserting elements in list
    l1.push_back(10); // insert at end
    l1.push_front(20); // insert at front
    l1.insert(l1.begin(), 30); // insert at specific position
    l1.insert(l1.begin(), 2, 40); // insert 2 times at specific position
    l1.insert(l1.end(), l2.begin(), l2.end()); // insert range of elements

    l1.emplace_back(50); // insert at end (in-place)
    l1.emplace_front(60); // insert at front (in-place)
    l1.emplace(l1.begin(), 70); // insert at specific position (in-place)

    // The following two lines were incorrect usages of emplace. Fixed below:
    l1.insert(l1.begin(), 2, 80); // Correct way to insert 2 times
    l1.insert(l1.end(), l2.begin(), l2.end()); // Correct way to insert a range

    cout << "l1 after inserting elements: ";
    for(auto i : l1){ cout << i << " "; }
    cout << endl;
    

    // rest all fuchtions are same as vector

    return 0;
}
