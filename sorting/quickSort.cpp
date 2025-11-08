#include <bits/stdc++.h>
using namespace std;

// Quick Sort Summary
// Choose pivot (e.g., first element)
// Move i from left till >pivot, j from right till <=pivot
// Swap i, j until i<j
// Swap pivot with a[j]
// Recurse on left and right parts

int funct(int a[], int lp, int hp){

    int pivot = a[lp];
    int i = lp;
    int j = hp;

    while(i < j){

        while(a[i] <= pivot && i <= hp - 1){
            i++;
        }

        while(a[j] > pivot && j >= lp + 1){
            j--;
        }

        if(i < j){
            swap(a[i],a[j]);
        }
        
    }

    swap(a[lp], a[j]);

    return j; 
}

quick_sort (int a[], int lp, int hp){

    if (lp < hp){

        int partition = funct(a,lp,hp);
        quick_sort(a, lp, partition - 1);
        quick_sort(a, partition + 1, hp);

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

    int lp,hp;
    lp = 0;
    hp = n - 1;

    quick_sort(a,lp,hp);

    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    } 

}
