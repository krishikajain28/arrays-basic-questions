#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<int> s; // stack of integers : initialise an empty stack
    
    // imagine it like this way
    // we created an empty stack s 
    // there is an empty container like this
    
    // |     |
    // |     |
    // |_____|
    //    s
    
    // push elements into the stack
    s.push(1); // stack now contains 1 element
    
    // |     |
    // |     |
    // |     |  
    // |__1__|
    //    s

    s.push(2); // stack now contains 2 elements
      
    // |     |
    // |     |
    // |  2  |
    // |__1__|
    //    s

    s.push(3); // stack now contains 3 elements

    // |     |
    // |  3  |
    // |  2  |
    // |__1__|
    //    s

    s.push(4); // stack now contains 4 elements 
    
    // |  4  |
    // |  3  |
    // |  2  |
    // |__1__|
    //    s

    // pop elements from the stack
    s.pop(); // stack now contains 3 elements

    // |     |
    // |  3  |
    // |  2  |
    // |__1__|
    //    s

    // the main thing to emphasize is that stack is a LIFO data structure
    // Last In First Out
    // the last element that was pushed into the stack is the first one to be popped out
    // so the last element that was pushed into the stack is 4
    // and the first one to be popped out is 4

    cout<<s.top(); // returns the top element of the stack without removing it
    // |     |  
    // |  3  |  
    // |  2  |
    // |__1__|
    //    s
    // the top element of the stack is 3
    cout<<"\n";
    cout<< s.size(); // returns the size of the stack
    // here the size of the stack is 3

    // rest all the functions of stack are same as that of vector n all only

    // for eg
    // s.empty() returns true if the stack is empty and false otherwise
    // s.clear() clears the stack
    // s.swap(s1) swaps the contents of stack s with stack s1
    // s.assign(n, x) assigns n copies of x to the stack s
    // s.insert(pos, x) inserts x at position pos in the stack s
    // s.erase(pos) erases the element at position pos in the stack s
    // s.resize(n) resizes the stack s to n elements
    // s.reserve(n) reserves space for n elements in the stack s
    // s.capacity() returns the capacity of the stack s

    // s.max_size() returns the maximum size of the stack s
    // s.front() returns the first element of the stack s
    // s.back() returns the last element of the stack s
    // s.begin() returns an iterator to the first element of the stack s
    // s.end() returns an iterator to the last element of the stack s
    // s.rbegin() returns a reverse iterator to the last element of the stack s
    // s.rend() returns a reverse iterator to the first element of the stack s
    // s.find(x) returns an iterator to the first occurrence of x in the stack s
    // s.find_if(x) returns an iterator to the first occurrence of x in the stack s
    // s.find_if_not(x) returns an iterator to the first occurrence of x in the stack s
}
