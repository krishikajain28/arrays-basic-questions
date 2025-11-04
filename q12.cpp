#include <bits/stdc++.h>
using namespace std;

// q12. Intersection of the two arrays

vector<int> intersectionB(vector<int> &a1, vector<int> &a2)
{ // bruteforcesolution:
    vector<int> inte = {};

    // bruteforce: for bruteforce we take iterator in a1 and check in  a2 if it has the corresponding element or not
    // if it does we check if its used w another element or not by making one more array visited array and keep the count in it
    // the moment u take element visited array corresponding index increases by 1 and thats how we keep track of the elements  that are alrweady been visited

    int n1 = a1.size();
    int n2 = a2.size();

    vector<int> va(n2, 0);

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (a1[i] == a2[j] && va[j] == 0)
            {
                inte.push_back(a1[i]);
                va[j] = 1;
                break;
            }
            if (a2[j] > a1[i])
            {
                break;
            }
        }
    }

    return inte;

    // Time complexity
    // Worst-case: O(n1 × n2) (brute force nested loop)
    // But due to if (a2[j] > a1[i]) break;, it performs much faster on sorted arrays — roughly O(n1 + n2) in best/average cases.

    // Space complexity
    // O(n2)
}

vector<int> intersectionO(vector<int> &a1, vector<int> &a2)
{ // two-pointer approach here we come

    int i = 0, j = 0;
    // one pointer will be on a1andthe other on a2 obvvv
    vector<int> inte = {};

    int n1 = a1.size();
    int n2 = a2.size();

    // so basically  we constantle check if i and j are equal
    // if they are wetake it and do i++ and j++ and if they do not we do i++
    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
            i++;
        else if (a2[j] < a1[i])
            j++;
        else
        {
            inte.push_back(a1[i]);
            i++;
            j++;
        }
    }

    return inte;
    // tc : O(n1 + n2)
    // sc : O(1)
}

int main()
{
    vector<int> a1 = {1, 2, 2, 3, 3, 4, 4, 5, 6}; // n1 = 9
    vector<int> a2 = {3, 4, 4, 4, 5, 6, 7, 8};    // n2 = 8

    // intersected array should be : {3, 4, 4, 5, 6}
    // note: elements are selected if they are present in both arrays so there can be dupes too it just need to have CORRESPONDING SAME ELEMENT IN SECOND ARRAY WHIC IS NOTUSED PREVIOUSLY

    cout << "Intersection of the two given arrays is: ";
    vector<int> i = intersectionO(a1, a2); // call b or o to execute as u want

    for (auto it : i)
    {
        cout << it << " ";
    }
}
