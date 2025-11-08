#include <bits/stdc++.h>
using namespace std;

// Custom comparator for sorting pairs
bool comp(pair<int, int> p1, pair<int, int> p2) {
    // Sort by second element (ascending)
    if (p1.second != p2.second)
        return p1.second < p2.second;
    // If second elements are equal, sort by first element (descending)
    return p1.first > p2.first;
}

int main() {

    // 1. SORTING with comparator and greater<>

    int a2[] = {3, 1, 4, 2};

    // Normal sort ascending
    sort(a2, a2 + 4); // [1,2,3,4]

    // Sort descending using greater<int>
    sort(a2, a2 + 4, greater<int>()); // [4,3,2,1]

    // Sorting array of pairs using custom comparator
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}, {1, 1}};

    // Sorting logic:
    // - First sort by second value (ascending)
    // - If second values are same, then sort by first value (descending)
    sort(a, a + 4, comp);

    cout << "Sorted pairs using comparator:" << endl;
    for (auto p : a) {
        cout << "{" << p.first << "," << p.second << "} ";
    }
    cout << endl;

    /*
    Output:
    {4,1} {2,1} {1,1} {1,2}
    */


    // 2. __builtin_popcount() and __builtin_popcountll()

    int num = 7; // Binary of 7 = 111
    int cnt = __builtin_popcount(num); 
    cout << "Number of 1s in binary of 7: " << cnt << endl; // 3

    long long big_num = 165786578687;
    int cnt_ll = __builtin_popcountll(big_num); 
    cout << "Number of 1s in binary of big number: " << cnt_ll << endl;


    // 3. next_permutation()

    string s = "123";

    cout << "All permutations of 123 are:" << endl;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    /*
    Output:
    123
    132
    213
    231
    312
    321
    */

    // 4. max_element()

    int a3[] = {5, 1, 9, 3, 7};
    
    // max_element returns iterator to maximum element
    int maxi = *max_element(a3, a3 + 5);
    cout << "Maximum element in a3 array is: " << maxi << endl;

    return 0;
}
