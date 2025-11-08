#include <bits/stdc++.h>
using namespace std;

bool palindromeString(string s, int i , int n ){

if(i>=n){
    return true;
}

if (s[i] != s[n] ){
    return false;
}

return palindromeString(s,i+1,n-1);

}

int main(){

    string userInput;

    cout<<"Enter a string: ";
    cin>>userInput;

    if(palindromeString(userInput, 0 , userInput.length()-1 ) == false){
        cout<<"Not a Palindrome";
    }else{
        cout<<"Palindrome";
    }
    // krirk


}
