#include <bits/stdc++.h>
using namespace std;

// selection sort algorithm

selection_sort(int a[], int n) {

for (int i = 0; i < n - 1; i++){
    int min = i; 
        for(int j = i + 1; j < n; j++){
            if(a[min] > a[j]){
                min = j;
            }
        } 
        swap(a[min],a[i]);  
}

// printing sorted elements

for(int i = 0; i<n; i++){
    cout<<a[i]<<" ";
} }

int main(){

// inputting values 

int n;
cout << "Enter the size of the array: ";
cin >> n;

int a[n];

// Entering elements in the array

cout << "Enter the elements of the array: ";
for( int i = 0; i<n; i++){
    cin>>a[i];
}

// code for selectn sort

// Selection Sort Logic:
// Step-by-step, we place the smallest element at the correct index.
// For each position in the array:
//   - We search the *entire remaining part* of the array to find the smallest element.
//   - Then we swap that smallest element with the current index.
// This process repeats from left to right, until the array is sorted.

cout << "Sorted array is: ";

selection_sort(a, n);

}
