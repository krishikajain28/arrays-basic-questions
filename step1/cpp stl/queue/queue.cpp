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
        q.pop();                 // Removing elements from the queue
    }
    cout << endl;
    cout << "Size of queue after popping: " << q.size() << endl; // 0
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Yes

    // why is it necessary to pop the elements after iterating through the queue?
    // Because the queue is a FIFO (First In First Out) data structure, and if we don't pop the elements, they will remain in the queue and occupy memory.
    // This can lead to memory leaks and other issues in larger programs.
    // so u cannot use for(auto i:q) for queue or stack because they do not provide iterators.
    // But you can use a while loop to iterate through the queue and pop the elements one by one.
    // This is a common practice in C++ to avoid memory leaks and other issues.
    // Also, you can use a for loop to iterate through the queue and pop the elements one by one, but it is not recommended because it is less efficient than using a while loop. 
    
    q.push(40); // 40 is added to the queue
    q.pop(); // 40 is removed from the queue
    q.push(50); // 50 is added to the queue
    // this is what the queue looks like now: 50
    while(!q.empty()){
       cout << q.front() << " "; // 50
    q.pop();                 // Removing elements from the queue
    }

    cout << endl;
    // queue is FIFO (First In First Out) data structure, so the first element that is added to the queue will be the first one to be removed from the queue.
    // This is why it is called a queue, because it is like a line of people waiting to get into a store or a movie theater.
    // The first person in line is the first one to get in, and the last person in line is the last one to get in.

    // a special type of queue now
    // priority queue

    // declaratn of priority queue
    
    priority_queue<int> pq; // max heap
    // max heap is a special type of binary tree where the parent node is always greater than or equal to its child nodes.

    // adding elements to the priority queue
    pq.push(10); // 10 is added to the priority queue
    pq.push(20); // 20 is added to the priority queue
    pq.push(30); // 30 is added to the priority queue
    pq.push(40); // 40 is added to the priority queue
    pq.push(50); // 50 is added to the priority queue

    cout << "Top element (highest priority): " << pq.top() << endl; // 50
    cout << "Size of priority_queue: " << pq.size() << endl;        // 5
    cout << "Is priority_queue empty? " << (pq.empty() ? "Yes" : "No") << endl; // No

    cout<<"Priority queue elements: ";
    while(!pq.empty()){
        cout<<pq.top()<<" "; //50 40 30 20 10
        pq.pop();          // Removing elements from the priority queue = must step
    }

    cout<<endl;
    
    // so we can't use for(auto i : pq) style loops.
    // We must pop elements to access them.

    // The default priority_queue is a max-heap,
    // meaning the largest element has the highest priority.

    // Use cases: job scheduling, Dijkstra's algorithm, etc.
    return 0;
}

