#include<bits/stdc++.h>
using namespace std;

int main(){

// if i give u "abcadefa" and ask how mayn time does char "a" appear in my given string?
// lets say a=0, b=1, ..... z=25
// therefore we have hasharray og size 26

string s;
cout<<"Enter your string: ";
cin>>s;

// queries
int q;
cout<<"Enter the number of queries: ";
cin>>q;

// precomputing
int hash[26]={0};
for(int i = 0; i<s.length(); i++){
    hash[s[i] - 'a']++;
}
    

while(q--){
    char c;
    cin>>c;
    cout<<"Letter "<<c<<" appears in string "<<s<<" for "<<hash[c -'a']<<" times."<<endl; 
}


}
