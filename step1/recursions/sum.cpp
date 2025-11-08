#include <bits/stdc++.h>
using namespace std;

int sumN(int i,int n){

    if(n<i){
        return 0;
    }

return i + sumN(i+1,n);

}

int main(){
    
    int n;
    int i = 1;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"Summation of first "<<n<<" numbers is: "<<sumN(i,n);

}

