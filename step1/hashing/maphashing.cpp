#include <bits/stdc++.h>
using namespace std;

int main(){

    // map hashing

    map<int,int> map;

    // taking size
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // taking array
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    // precompute
    for(int i = 0; i<n; i++){
        map[arr[i]] += 1;
    }

    // taking queries
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    
    while(q--){
        int number;
        cin >> number;
        cout << "Element " << number << " appears " << map[number] << " times in the array."<<endl;
    }

    // finding the highest and lowest frequeny element
    
    

}