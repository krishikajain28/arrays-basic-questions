#include <bits/stdc++.h>
using namespace std;

bubble_sort(int a[], int n)
{

    // bubble sort logic -  to compare each adjacent elements and push the highest to the end until the array is sorted
    // 2 conclusions from here
    // 1. we need to compare
    // 2. we need iterate until sorting is done
    // so 2 loops --> inner for comapring and the outer one for iterating until sorted

    for (int i = 0; i < n - 1; i++)
    {

        int didSwap = 0;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j + 1], a[j]);
                didSwap = 1;
            }
        }

        if (didSwap == 0)
        {
            break;
        }

        // why added didSwap?
        // taking into consideratn, the array is already sorted, which means swaps = 0,
        // and the if conditn of the inner for loop would never have come true so didSwap always stays 0 and the time complextity
        // woulld always be O(n) instead of O(n^2) so time saves ;)

        // Case   	Time Complexity
        // Best	    O(n) ✅ (with swapped check)
        // Average	O(n²)
        // Worst	O(n²)
        // Space	O(1)
    }

    cout << "The sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bubble_sort(a, n);
}