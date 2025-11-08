#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l, int m, int h){

    int arr[h - l + 1];

    // left pointer
    int i = l;

    // right pointer
    int j = m + 1;

    // temp iterator
    int k = 0;

    while(i<=m && j<=h){

        if (a[i] <= a[j]){
            arr[k++] = a[i++];

        } else {
        arr[k++] = a[j++];
        }
 
    }

    while(i <= m) {
        arr[k++] = a[i++];   
    }

    while(j <= h) {
        arr[k++] = a[j++];   
    }

    for(int index = 0; index < k; index++){
        a[l + index] = arr[index]; 
    }
}

void merge_sort(int a[], int l, int h){
      
    // base case:
    if (l < h){
        
        // mid
        int m = l + (h-l)/2;

        // left half callling
        merge_sort(a,l,m);
    
        // right half calling
        merge_sort(a,m+1,h);

        // merge n
        merge(a,l,m,h);

    }
    } 


int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n; 

    int l,h;
    l = 0;
    h = n - 1;  

    int a[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    cout << "The sorted array is: ";
    merge_sort(a,l,h);

    for(int i = 0; i < n; i++){
        cout << a[i] << " "; 
    }

}
