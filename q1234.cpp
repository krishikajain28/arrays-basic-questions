#include <bits/stdc++.h>
using namespace std;

int main()
{
    // space complexity is the amount of memory space required by an algorithm to run
    // time complexity is the amount of time required by an algorithm to run
    // both are important to consider when solving a problem
    // space complexity is usually denoted as O(1) for constant space, O(n) for linear space, O(n^2) for quadratic space, etc.
    // time complexity is usually denoted as O(1) for constant time, O(n)

    // every question has minimum 3 approaches when solving
    // 1. brute-force
    // 2. better
    // 3. optimal

    // brute-force is the solution that directly comes in to ur mind when any question is asked
    // better approach is like the mid one — not too good, not too bad
    // optimal is the solution that is thought of about space, time and all and is the best solution for a problem in all aspects

    // q1 : finding the highest number in an array

    // brute-force approach: sort the array in ascending order and take the last element as the highest
    // time complexity: O(n log n) due to sorting

    // optimal approach: start by assuming the first element is the maximum
    // then iterate through the array comparing each element with the current maximum
    // if a larger element is found, update the maximum
    // time complexity: O(n)

    // so we go for the optimal approach for q1

    int n = 5;
    int a[n] = {145, 2431, 561, 52, 89};

    cout << "The array we have: { ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "}";

    int max = a[0];
    for (int j = 0; j < n; j++)
    {
        if (max < a[j])
        {
            max = a[j];
        }
    }

    cout << "\nThe highest element in the array is : " << max;

    // q2 : find the second highest number in an array

    // array : {1,2,3,4,5}
    // index:   0 1 2 3 4
    // size of the array: n = 5
    // last element: n-1 = 4th index pe jo hain
    // second lst element: n-2 = 3rd index pe jo h vo
    // brute-force : sort and take (n-2)th element as the second highest
    // time complexity : n log n + n
    // why n logn + n?
    // because:
    // sorting takes usually n logn time
    // array : {1, 2, 3, 4, 5, 5}
    // after sorting, considering the worst case we have an array like [1,7,7,7,7,7]
    // here the largest is 7 but we have to run one more loop to discard and not select the number on (n-2)th index if it's 7 again
    // so in this worst case the second largest is at 0th index which means we have to run a loop again for n times
    // so tc becomes n log n + n

    // better:
    // smax = INT_MIN //if array holds neg numbers;
    // smax = -1
    // array : {3, 7, 2, 9, 10, 6}
    // max = 10, smax = -1
    // smax = 7
    // smax = 9
    // now that we have found the largest element, we run the loop once for all elements
    // and check if it's not the largest and as well as greater than smax
    // taking smax at the start as -1, considering the array does not hold neg numbers
    // if the array holds neg numbers we can take int_min function for smax
    // there might also be a case where smax does not exist and array has only 7s in it
    // obv irl toh itna nahi hota yeh but interviewer ko yeh cases batana chahiye
    // ab isme tc: 2n as we run the loop twice for n times but 2 is neglected so it's O(n) only — but interviewer ko toh sabh hee batana hain

    int smax = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > smax && a[i] != max)
        {
            smax = a[i];
        }
    }

    cout << "\nThe second highest element in the array is (better sol): " << smax;

    // optimal:

    // taking smax as -1 and largest as a[0]

    // renewing the max and smax cause no khichdi — I want at least while practising

    // Time Complexity: O(n)
    // Space Complexity: O(1) (you’re using just two variables: largest and slargest)

    // This is the most efficient approach possible for this problem in terms of time complexity,
    // because any algorithm that finds max or second max must examine all elements at least once — so O(n) is the lower bound
    // this makes the interviewer think that u understand the whys not only the whats

    int largest = a[0];
    int slargest = -1;

    // array : [ 2, 76, 97, 80, 50, 1 ]
    // l = a[0] = 2;  sl = -1
    // sl = 2; l = 76
    // sl = 76; l = 97
    // sl = 80; l = 97

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }

    cout << "\nThe largest : " << largest << " \nThe second largest is (optimal): " << slargest;

    // q3 : find the smallest

    // brute-force : sorting and first element; tc = n logn
    // better: same as optimal
    // optimal: considering first one as the smallest and iterating once to find the smallest by comparing

    int smallest = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }

    cout << "\nThe smallest element in the array is (optimal & better solutn) : " << smallest;

    // q4: second smallest

    // brute force : sorting and taking the 2nd element
    // better : same jese largest
    // optimal : same as better

    int small = a[0];
    int ssmallest = -1; // considering no neg num in arrays

    for (int i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            ssmallest = small;
            small = a[i];
        }
        else if (a[i] < ssmallest && a[i] > small)
        {
            ssmallest = a[i];
        }
    }

    cout << "\nThe smallest : " << small << "\nThe second smallest (optimal): " << ssmallest;
}
