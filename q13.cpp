#include <bits/stdc++.h>
using namespace std;

// q13. find the missing number in the array
// problem:
// you will be given an n and an array of size n-1 having elements with value ranging from 1-n (distinct elements)
// ranging from 1 to n
// one number will be missing from the range 1 to n
// example:
// array = {1, 2, 4, 5}, n = 5
// the missing number here is 3

int missingNumberB(vector<int> &a, int n)
{
    // so bruteforce is basically linearsearch of m
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return -1; // fallback, shouldn't happen
}

int missingNumberBe(vector<int> &a, int n)
{
    // you use hashing here

    vector<int> ha(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {

        ha[a[i]] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (ha[i] == 0)
        {
            return i;
        }
    }

    // tc: O(2n) worst cases
    // sc: O(n+1) so basically O(n)
}

int missingNumberO1(vector<int> &a, int n)
{
    // has 2 optimal solutions
    // 1. sum
    // 2. xor

    // 1. sum -
    // as we know,
    // the formula to sum of first n natural numbers: n(n+1)/2

    // so if n = 5
    // 5(5+1)/2 = 15
    // therefore, summation of first 5 natrual numbers: 15

    // so when we run through the loop
    // and add up all the elements
    // now
    // if array: {1,2,4,5}
    // n = 5
    // summation of first 5 natural numbers: 15
    // summation of array elements : 12
    // therefore 15 - 12 = 3 aka the missing element

    // this is how we do it!!!!!!!!

    int s = n * (n + 1) / 2;

    int s_ae = 0;
    for (int i = 0; i < n - 1; i++)
    {
        s_ae += a[i];
    }

    return s - s_ae;

    // tc: O(n)
    // sc: O(1)
}

int missingNumberO2(vector<int> &a, int n)
{
    // the secondmethod for this is XOR method

    // the XOR concept
    // XOR symbol: ^
    // XOR is basically eXclusive OR
    // --> false if both bits same, true if both bits different
    // 0 ^ 0 --> 0
    // 0 ^ 1 --> 1
    // 1 ^ 0 --> 1
    // 1 ^ 1 --> 0

    // therefore
    // 2 ^ 2 --> 0
    // 2 ^ 2 ^ 2 --> 0 ^ 2 --> 2

    // this is the concept we use
    // xor of 1-n

    int xor_ae = 0, xor_n = 0;

    for (int i = 0; i < n - 1; i++)
        xor_ae = xor_ae ^ a[i];

    for (int i = 1; i <= n; i++)
        xor_n = xor_n ^ i;

    return xor_ae ^ xor_n;

    // tc: O(2n)
    // sc: O(1)
    // then we say how is this better than sumoptimal solution
    // so we use another XOR one
    // that is in the next function
}

int missingNumberO21(vector<int> &a, int n)
{

    // here we try todo the work for both for loops in one
    int xor_ae = 0, xor_n = 0;

    for (int i = 0; i < n - 1; i++)
    {
        xor_ae = xor_ae ^ a[i];
        xor_n = xor_n ^ (i + 1);
    }

    return xor_ae ^ xor_n ^ n;
}

int main()
{

    vector<int> a = {1, 2, 4, 5};
    int n = 5;

    int m = missingNumberO21(a, n); // change acc wht u want, B(bruteforce), Be(better --> hashing), O1(sum), O2(xor)

    cout << "Missing num: " << m;
}

// conclusion table:
// | Method             | Name                            | Time     | Space    | Idea                                              |
// | ------------------ | ------------------------------- | -------- | -------- | ------------------------------------------------- |
// | `missingNumberB`   | Brute Force                     | O(n²)    | O(1)     | For every number from 1–n, linearly search array  |
// | `missingNumberBe`  | Better (Hashing)                | O(n)     | O(n)     | Create hash array to mark presence                |
// | `missingNumberO1`  | Optimal 1 (Sum Formula)         | O(n)     | O(1)     | Compare total expected sum vs actual sum          |
// | `missingNumberO2`  | Optimal 2 (XOR 2 loops)         | O(2n)    | O(1)     | XOR all 1–n and XOR all array elements separately |
// | `missingNumberO21` | Most Optimal (XOR 1 loop)       | O(n)     | O(1)     | Do both XORs together in single loop              |
