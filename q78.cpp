#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // q7: rotate the array to left by one space
    // which means that array [1,2,3,4,5] rotated should look like [2,3,4,5,1]

    void rotatingLeft(vector<int> &a, int n, int k)
    {

        k = k % n;

        int temp = a[0];

        for (int i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        a[n - 1] = temp;
    }

    // q8: rotate the array to left by k places, k is user input
    // for these questns keep in mind that u hv to always do k % n as for n < k (eg: if youre given k as 9 and you n is 7
    // you have to rotate the array 9 times but we already know that if this array is moved n times , its gonna look the same)
    // for saying let's say if the current array is moved 9 times is similar to 7 + 2 times
    // at 7 times of rotations (n times of rotatn) it comes back to og posoitn , so it only has to rotate 2 times more
    // thats the idea behind k = k % n; (k = 7 % 9 = 2 , therfore k = 2 eventually)

    // for bruteforce we add the same concept as above and just run the same loop for k times as given below

    void rotatingLeftByKPlaces(vector<int> &a, int n, int k)
    {

        // the flwg one is the bruteforce method
        // k = k % n;

        // for(int j = 0; j < k; j++){               // the extra for loop that runs k times

        //     int tempo = a[0];

        //     for(int i = 0; i < n - 1; i++ ){      // the prev logiv of rotating
        //     a[i] = a[i + 1];
        //     }

        //     a[n - 1] = tempo;

        // }

        // but bruteforce consumes a lot of time its lit O(k*n) if k is 1000???
        // then?????????
        // then better comes in pictures

        // better apporach:
        // bohot hee bada hain bhai baadme dekhte hain

        // but as we know what is the best approach???????🥁🥁🥁🥁🥁🥁🥁
        // optimal approach:
        // optimal is so ez and so op bas dimaag 5500 time zyada lagana hota hain ispe pohochne ke liye or maybe tum shayad phoch bhi naa paao
        // but optimal hee seekhna hain filhaal ke liye cause somebody has already put itna dimaag and optimized it

        // so basically, in an array
        // eg
        // array : {1, 2, 3, 4, 5, 6, 7}
        // rotated array by k = 3 places : {4, 5, 6, 7, 1, 2, 3}
        // so what we do is
        // we first split the array by k and reverse each of the splitted arrays and then the arrayas whole is reversed
        // in this eg, {1, 2, 3, 4, 5, 6, 7}
        // indexes ---> 0  1  2  3  4  5  6
        // we split at 3rd index
        // so now we have 2 split arrays {1, 2, 3} and {4, 5, 6, 7}
        // then we reverse them individually {3, 2, 1} and {7, 6, 5, 4}
        // now we merge and then reverse the whole array
        // merge : { 3, 2, 1, 7, 6, 5, 4}
        // reverse : { 4, 5, 6, 7, 1, 2, 3 }
        // this is the optimized solutn with tc 0(n) and sc 0(1)

        // {1, 2, 3, 4, 5, 6, 7}
        // k = 3
        // {3, 2, 1} // {7, 6, 5, 4}
        // {3, 2, 1, 7, 6, 5, 4}
        // {4, 5, 6, 7, 1, 2, 3}

        // code:

        k = k % n;

        // Step 1: Reverse first k elements reverse( vec_name.begin(), vec_name.begin() + k )
        reverse(a.begin(), a.begin() + k);

        // Step 2: Reverse rest of the elements
        reverse(a.begin() + k, a.end());

        // Step 3: Reverse the whole array
        reverse(a.begin(), a.end());

        // about reverse()
        // In C++, reverse() is from <algorithm> library and works on containers like vector
        // It takes two **iterators** as input, not array elements or indices
        // Syntax: reverse(startIterator, endIterator)
        // Example: reverse(a.begin(), a.end()) → reverses the entire vector
    }
};

int main()
{

    int n = 5;
    vector<int> a = {1, 2, 3, 4, 5};

    Solution s;

    cout << "The array rotated by one place toward left looks like : ";
    // s.rotatingLeft(a,n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    int k;

    cout << "\nEnter the value of K: ";
    cin >> k;

    cout << "\nThe array rotated by " << k << " places towards left looks like: ";

    s.rotatingLeftByKPlaces(a, n, k);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
