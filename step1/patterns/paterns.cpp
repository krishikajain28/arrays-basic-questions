#include <iostream>
using namespace std;

// ---------------------
// Pattern 1:
// ****
// ****
// ****
// ****
// ---------------------
void pattern1(int n) {
    cout << "Pattern 1:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

// ---------------------
// Pattern 2 (Pyramid):
//     *
//    ***
//   *****
//  *******
// *********
// ---------------------
void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int s = 0; s < 2 * i + 1; s++) {
            cout << "*";
        }
        cout << endl;
    }
    
}

// ---------------------
// Pattern 3 (Inverted Pyramid):
// *********
//  *******
//   *****
//    ***
//     *
// ---------------------
void pattern3(int n) {
    for (int i = 0; i < n; i++) {
        for (int m = 0; m < i; m++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
}

// ---------------------
// Pattern 4 (Diamond with repeated center):
//     *
//    ***
//   *****
//   *****
//    ***
//     *
// ---------------------

void pattern4(int n) {
    cout << "Pattern 4:\n";
    pattern2(n); // top triangle (with center)
    pattern3(n); // bottom triangle (repeats center)
    cout << endl;
}

// pattern 5:
// *
// **
// ***
// ****
// ***
// **
// *

void pattern5(int n){

    cout<<"Pattern 5 : "<<endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<i ;j++ ){
        cout<<"*";
    }
    cout<<endl;
    }
    
    for (int i = n -2; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
    }
    cout << endl;
}}

int main() {

    int n;
    cout << "Enter value of n: ";
    cin >> n;
    
    pattern1(n);

    cout << "Pattern 2:\n";
    pattern2(n);  

    cout << "Pattern 3:\n";
    pattern3(n);

    pattern4(n);

    pattern5(n);
    
    
    return 0;


}

