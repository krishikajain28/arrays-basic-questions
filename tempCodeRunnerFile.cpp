#include <iostream>
using namespace std;

int main() {
    int age;

    // Prompt user to enter age
    cout << "Enter your age: ";
    cin >> age;

    // Check age and display the result
    if (age >= 18) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

char grade;
    cout << "Enter your grade (A, B, C): ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!\n";
            break;
        case 'B':  // Fallthrough: executes code for both B and C
        case 'C':
            cout << "Good job!\n";
            break;
        default:
            cout << "Invalid grade\n";
    }

    // Data types explained
    // int: stores integers from -2,147,483,648 to 2,147,483,647 (32-bit system)
    // long: stores larger integers (platform-dependent, often same as int on 32-bit systems)
    // long long: stores integers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    // double: stores floating-point numbers with precision up to 15-16 significant digits
    // string: used to store text
    // getline: used to input strings that can include spaces

    // ARRAYSSS

    

    int myarr2[5] = {1,2,3,4,5};

    int myarr3[5];
    myarr3[0]=2;
    myarr3[1]=3;
    myarr3[2]=4;
    myarr3[3]=5;
    myarr3[4]=6;

// cout<</*myarr<<endl<<*/myarr2<<endl<<myarr3; //bro nyarr toh kiya hee nahid efine toh error to aayega na, also this will show

// yeh aise upar wala karege toh memory addr print hoga not the array to print array we use for loops
for (int i=0;i<5;i++){
    cout<<myarr2[i];
}

// this is how u can use elements of an arraye individually to modify,change or do smtg with them
myarr2[2]=10;
cout<<endl<<myarr2[2];

// this was all about 1d arraye now 2d array





return 0; // End of program



}
