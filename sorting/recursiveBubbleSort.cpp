#include <bits/stdc++.h>
using namespace std;

void Rbubble_sort(int a[], int n){

    // base condition
    if (n == 1){
        return;
    }

    for (int i = 0; i < n - 1; i++){
        if (a[i] > a[i+1]){
            swap(a[i],a[i+1]);
        }
    }

    Rbubble_sort(a,n-1);

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

    Rbubble_sort(a,n);

    cout << "The sorted array is: ";
        for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    } 


}