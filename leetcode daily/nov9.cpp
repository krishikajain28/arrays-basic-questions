#include <bits/stdc++.h>
using namespace std;

// q.Count Operations to Obtain Zero
// You are given two non-negative integers num1 and num2.

// In one operation, if num1 >= num2, you must subtract num2 from num1, otherwise subtract num1 from num2.

// For example, if num1 = 5 and num2 = 4, subtract num2 from num1, thus obtaining num1 = 1 and num2 = 4. However, if num1 = 4 and num2 = 5, after one operation, num1 = 4 and num2 = 1.
// Return the number of operations required to make either num1 = 0 or num2 = 0.

// Example 1:

// Input: num1 = 2, num2 = 3
// Output: 3
// Explanation:
// - Operation 1: num1 = 2, num2 = 3. Since num1 < num2, we subtract num1 from num2 and get num1 = 2, num2 = 3 - 2 = 1.
// - Operation 2: num1 = 2, num2 = 1. Since num1 > num2, we subtract num2 from num1.
// - Operation 3: num1 = 1, num2 = 1. Since num1 == num2, we subtract num2 from num1.
// Now num1 = 0 and num2 = 1. Since num1 == 0, we do not need to perform any further operations.
// So the total number of operations required is 3.
// Example 2:

// Input: num1 = 10, num2 = 10
// Output: 1
// Explanation:
// - Operation 1: num1 = 10, num2 = 10. Since num1 == num2, we subtract num2 from num1 and get num1 = 10 - 10 = 0.
// Now num1 = 0 and num2 = 10. Since num1 == 0, we are done.
// So the total number of operations required is 1.

class Solution
{
public:
    int countOperationsB(int num1, int num2)
    {
        int c = 0;
        while (num1 != 0 && num2 != 0)
        {
            if (num1 >= num2)
            {
                num1 = num1 - num2;
                c++;
            }
            else
            {
                num2 = num2 - num1;
                c++;
            }
        }
        return c;

        // tc: O(c)
    }

    int countOperationsO(int num1, int num2)
    {
        // explanatinon:
        // Step 1: Recognize the pattern
        // Look at repeated subtraction:

        // Example: num1 = 20, num2 = 3
        // Subtract 3 repeatedly: 20 → 17 → 14 → 11 → 8 → 5 → 2
        // 7 operations

        // Notice:
        // 7 = 20 / 3
        // Final remainder = 20 % 3 = 2

        // ✅ So instead of 7 iterations, you can do 1 step:
        // operations += 20 / 3;  // 7
        // num1 = 20 % 3;         // 2

        while (num1 != 0 && num2 != 0)
        {
            if (num1 >= num2)
            {
                operations += num1 / num2; // count all the subtractions at once
                num1 %= num2;              // reduce num1 to remainder
            }
            else
            {
                operations += num2 / num1; // count all the subtractions at once
                num2 %= num1;              // reduce num2 to remainder
            }
        }
    }

    // Maximum loops needed ≈ 2 * log(max(num1, num2)) → very small even for huge numbers.
};

int main()
{
    Solution s;

    int n = s.countOperationsO(5, 3);

    cout << n;
}