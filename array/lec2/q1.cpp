#include <bits/stdc++.h>
using namespace std;

/*
    Problem Statement:
    Given an array of integers 'nums' and an integer 'target',
    return the indices of the two numbers such that they add up to the target.

    Example:
    nums = [3, 4, 6, 2], target = 7
    Output: [0, 1]  because nums[0] + nums[1] = 3 + 4 = 7
*/

/*-----------------------------------------
    Approach 1: Brute Force
    -----------------------------------------
    - Check every possible pair (i, j)
    - If nums[i] + nums[j] == target → return their indices

    ⏱️ Time Complexity: O(n²)
    → Two nested loops for all pairs
    💾 Space Complexity: O(1)
    → No extra data structure used
*/
vector<int> twoSumB(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (nums[i] + nums[j] == target)
                return {i, j}; // Return the first valid pair
    return {};                 // If no such pair exists
}

/*-----------------------------------------
    🔸 Approach 2: Optimal (Using Hash Map)
    -----------------------------------------
    - Use an unordered_map to store visited numbers and their indices
    - For each element nums[i]:
        → Calculate complement = target - nums[i]
        → If complement already exists in map, we found our answer
        → Otherwise, store nums[i] → i in map

    ⏱️ Time Complexity: O(n)
        → Each element processed once
    💾 Space Complexity: O(n)
        → Extra map to store elements
*/
vector<int> twoSumO(vector<int> &nums, int target)
{
    unordered_map<int, int> seen; // value → index
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (seen.count(complement))
            return {seen[complement], i}; // Pair found
        seen[nums[i]] = i;                // Store current element
    }
    return {}; // No valid pair found
}

int main()
{
    vector<int> a = {3, 4, 6, 78, 2, 46, 2, 4, 78, 4, 2, 4, 71, 41};
    int k = 7;

    vector<int> brute = twoSumB(a, k);
    vector<int> optimal = twoSumO(a, k);

    cout << "Brute: ";
    for (auto i : brute)
        cout << i << " ";
    cout << "\nOptimal: ";
    for (auto i : optimal)
        cout << i << " ";
}
