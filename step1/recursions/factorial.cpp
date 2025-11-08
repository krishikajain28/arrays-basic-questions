#include <bits/stdc++.h>
using namespace std;

int fact(int n){

    if (n==0 || n==1){
        return 1;
    }

return n*fact(n-1);

}

int main(){

int i=1,n;
cout<<"Enter the number whose factorial u want to find: ";
cin>>n;

cout<<"The fact of "<<n<<" is: "<<fact(n);

}
