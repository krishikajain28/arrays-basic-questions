#include <bits/stdc++.h>
using namespace std;

// q11: union and intersection  of 2 sorted arrays:
// bruteforce is basically done using sets as set is a data type that allows only unique elements in it

set<int> unionb(vector<int> &a1, vector<int> &a2)
{
    int n1 = a1.size();
    int n2 = a2.size();
    set<int> s = {};
    for (int i = 0; i < n1; i++)
    {
        s.insert(a1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(a2[i]);
    }

    return s;

    // tc = O(n1 logn + n2 logn) + O(n1+n2)
    // sc = O(n1+n2) + O(n1+n2)
    // see ivenot converted here the set to vector beecause itsez no timeto waste now so i ve just passed  a set and made theo/pset but thats not correct
    // and therefore as we have to convert maneawe make anewvector and push the elementsof setinto the vector
    // sothats why we have  O(n1+n2)  extra tc and  O(n1+n2) extra sc(worstcase)
}

vector<int> uniono(vector<int> &a1, vector<int> &a2)
{

    // optimal methods involves 2 pointer method and we take adv of the fact that both arrays are sorted
    // we sort of compare the twoarrays check which ones lower take that thn moving the iterator of the taken one ahead
    // the iterator of the bigger onestays atthe same element  so until the next iteratorof the second one that makesthe first iterator smaller we keep moving
    // you'll probab won't understand just watch tuf maybe

    int i = 0, j = 0;
    vector<int> u = {};
    int n1 = a1.size();
    int n2 = a2.size();

    while ((i < n1) && (j < n2))
    {
        if (a1[i] <= a2[j])
        {
            if (u.size() == 0 || u.back() != a1[i])
            {
                u.push_back(a1[i]);
            }
            i++;
        }
        else
        {
            if (u.size() == 0 || u.back() != a2[j])
            {
                u.push_back(a2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {

        if (u.size() == 0 || u.back() != a1[i])
        {
            u.push_back(a1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (u.size() == 0 || u.back() != a2[j])
        {
            u.push_back(a2[j]);
        }
        j++;
    }

    return u;
    // tc : n1 + n2
    // sc : n1 + n2 (not extra space but to return we need an array)

    // Code flow visualization

    // Let’s say
    // a1 = [1,1,2,2,3,4,5]
    // a2 = [2,3,4,4,5,6,6,6,7,8,9,9]

    // Step by step:
    // Compare 1 vs 2 → push 1
    // Compare 1 vs 2 → push 1 skipped (duplicate)
    // Compare 2 vs 2 → push 2 once
    // Compare 3 vs 3 → push 3
    // …

    // → Final vector = [1,2,3,4,5,6,7,8,9]
    // ✅ Perfect union output.
}

int main()
{

    vector<int> a1 = {1, 1, 2, 2, 3, 4, 5};
    vector<int> a2 = {2, 3, 4, 4, 5, 6, 6, 6, 7, 8, 9, 9};

    cout << "Union of the given 2 arrays is: ";
    vector<int> s = uniono(a1, a2); // just change "b" and "o" (as in uniono or unionb) acc to use and also set<> and vector<> becaseu their retunr types are different
    for (auto i : s)
    {
        cout << i << " ";
    }
}
