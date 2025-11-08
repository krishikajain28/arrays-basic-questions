#include <bits/stdc++.h>
using namespace std;

void Rinsertion_sort(int a[], int n, int i){

   if(i > n){
    return;
   }

   int j = i;

    while (j > 0 && a[j - 1] > a[j]){

            swap(a[j],a[j-1]);
            j--;

        }
    
    Rinsertion_sort(a,n,i+1);
    
}

int main(){
    
    int n,i;
    i = 0;
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the elements of the array: ";

    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 

    cout << "The sorted array is: ";

    Rinsertion_sort(a,n,i);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

}
