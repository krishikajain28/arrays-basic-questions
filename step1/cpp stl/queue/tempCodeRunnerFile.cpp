#include <bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;       // Declaration

    q.push(10);         // Initialization (pushing values)
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;  // 10
    cout << "Back element: " << q.back() << endl;    // 30
    cout << "Middle element: " << q.front() + (q.back() - q.front()) / 2 << endl; // 20
    cout << "Size of queue: " << q.size() << endl;   // 3
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // No
    cout << "Queue elements: ";
    while(!q.empty()){
        cout << q.front() << " "; // 10 20 30
        // q.pop();                 // Removing elements from the queue
    }
    cout << endl;
    // cout << "Size of queue after popping: " << q.size() << endl; // 0
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Yes



}

