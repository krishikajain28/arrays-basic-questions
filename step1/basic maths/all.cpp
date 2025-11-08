#include <bits/stdc++.h>
using namespace std;

// Count number of digits
int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    return count;
}

// Display individual digits
void individualDigits(int n) {
    cout << "The individual digits of the number are: ";
    int digit;
    vector<int> digits;

    while (n > 0) {
        digit = n % 10;
        digits.push_back(digit);
        n = n / 10;
    }

    reverse(digits.begin(), digits.end());

    for (auto i : digits) {
        cout << i << " ";
    }
}

// Count digits using logarithmic method
int logMethod(int n) {
    int digit = log10(n) + 1;
    return digit;
}

// Reverse a number
void reverseNumber(int n) {
    int ld = 0;
    int revNumber = 0;

    while (n > 0) {
        ld = n % 10;
        revNumber = (revNumber * 10) + ld;
        n = n / 10;
    }

    cout << revNumber;
}

// Check if a number is palindrome (manual compare)
void checkPalindrome(int n) {
    string s = to_string(n);
    vector<int> v;

    for (char c : s) {
        v.push_back(c - '0');
    }

    int start = 0, end = v.size() - 1;

    while (start < end) {
        if (v[start] != v[end]) {
            cout << "\nThe number u input is not a Palindrome\n";
            return;
        }
        start++;
        end--;
    }

    cout << "\nThe number u input is a Palindrome\n";
}

// Check if a number is palindrome (reverse method)
void checkPalindromeReverse(int n) {
    string s = to_string(n);
    vector<int> v;

    for (char c : s) {
        v.push_back(c - '0');
    }

    vector<int> vog(v);
    reverse(v.begin(), v.end());

    if (v == vog) {
        cout << "Palindrome through reverse ";
    } else {
        cout << "Not a Palindrome through reverse";
    }
}

// Check if number is an Armstrong number
void checkArmstrong(int n) {
    int count = 0;
    int dupN = n;

    int digit = 0;
    int armstrongCalc = 0;

    while (dupN > 0) {
        dupN = dupN / 10;
        count++;
    }

    dupN = n;

    for (int i = 0; i < count; i++) {
        cout << "\nNB: " << dupN;
        digit = dupN % 10;
        cout << "\nDigit: " << digit;

        armstrongCalc = armstrongCalc + round(pow(digit, count));
        cout << "\nIndividual num raised to count: " << pow(digit, count);
        cout << "\nArmstrong Calculation: " << armstrongCalc;

        dupN = dupN / 10;
        cout << "\nNA: " << dupN;
    }

    if (armstrongCalc == n) {
        cout << "\nArmstrong number";
    } else {
        cout << "\nNot an Armstrong number";
    }
}

// Print all divisors of a number
void divisors(int n) {
    cout << "\nThe divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}

// Check if number is prime
void prime(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        cout << endl << n << " is a prime number";
    } else {
        cout << endl << n << " is not a prime number";
    }
}

// Find GCD using brute-force
void gcd(int a, int b) {
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << "The gcd of " << a << " and " << b << " is: " << i;
            break;
        }
    }
}

// Find GCD using Euclidean Algorithm
void euclideanAlgorithm(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    cout << a;
}

int main() {
    int n;

    cout << "Enter a value: ";
    cin >> n;

    cout << "The number of digits in " << n << " is: " << countDigits(n) << endl;

    individualDigits(n);

    cout << "\nThe number of digits using log method: " << logMethod(n) << endl;

    cout << "The reverse of " << n << " is: ";
    reverseNumber(n);

    checkPalindrome(n);
    checkPalindromeReverse(n);
    checkArmstrong(n);
    divisors(n);
    prime(n);

    int a, b;
    cout << "\nEnter 2 numbers whose gcd you want to know: ";
    cin >> a >> b;

    gcd(a, b);

    cout << "\nGCD using Euclidean Algorithm: ";
    euclideanAlgorithm(a, b);
}
