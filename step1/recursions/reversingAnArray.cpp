#include <bits/stdc++.h>
using namespace std;

void revR(int a[],int l,int u){

if (l>=u) {
    return;
}

swap(a[l],a[u]);

revR(a,l+1,u-1);

}

int main(){

    // an array
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int a[n];

    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    cout<<"The elements of your array is: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }  
    
    int l = 0;
    int u = n-1;
    
    cout<<"\nl = "<<l<<"\nu = "<<u;
    
    // now we are to reverse an array using recursion
   
    cout<<"\nThe elements in reverse order are: ";
   
    revR(a, l, u);
   
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }  




}

