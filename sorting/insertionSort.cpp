#include <bits/stdc++.h>
using namespace std;

insertion_sort (int a[], int n){

    for(int i = 0; i < n; i++){
        
        int j = i;

        while (j > 0 && a[j - 1] > a[j]){

            swap(a[j],a[j-1]);
            j--;

        }
        
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

}

int main(){
    
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 

    cout << "The sorted array is: ";

    insertion_sort(a,n);

}
