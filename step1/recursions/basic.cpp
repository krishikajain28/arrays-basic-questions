#include <bits/stdc++.h>
using namespace std;

// Function to print name n times using recursion
void printName(int i, int n) {
    if (i > n) {
        return; // base case: stop recursion when i > n . always the first step in recursion
    }

    cout << i << " : My name is Krissskaaa.\n"; //then  after base case with put the print staatement or whatev it is to be output

    printName(i + 1, n); // recursive call with incremented value after the print statement 
}

void printN21(int n){

    // base case
    if (n == 0){
        return;
    }

    cout<<n<<" ";

    printN21(n-1);

}

void print12N(int i,int n){
    
    if (i == n+1){
        return;
    }

    cout<<i<<" ";

    print12N(i+1,n);
}

void backtracking12n(int n){

    // backtracking basically means u recurse first and then print later while cmng back

    // first base case as usual
    if (n<1){
        return;
    }

    // then recurse
    backtracking12n( n-1 );

    // then print while cmng back
    cout<<n<<" ";

}
f 
void backtrackingn21(int i,int n){

    if (i>n){
        return;
    }

    backtrackingn21(i+1,n);

    cout<<1<<" ";

}

int main() {

    int n;
    cout<<"Enter a value: ";
    cin>>n;
    
    printName(1, n); // start from 1 for cleaner output numbering

    printN21(n); //for printing n to 1

    cout<<endl;
    
    print12N(1,n); //for printing 1 to n 
    
    cout<<endl;

    backtracking12n(n);

    backtrackingn21(1,n);

    return 0;

}
