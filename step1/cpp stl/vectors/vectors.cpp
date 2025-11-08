#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

// Custom class
class Student
{
public:
    string name;
    int age;

    // Constructor
    Student(string n, int a) : name(n), age(a)
    {
        cout << "Constructor called for: " << name << endl;
    }

    // // Destructor
    // ~Student() {
    //     cout << "Destructor called for: " << name << endl;
    // }
};

int main()
{
    // 🧠 Vectors - dynamic arrays that can grow/shrink in size
    vector<int> v; // syntax: vector<data_type> vector_name;
    // vector<int> v1= {1, 2, 3, 4, 5}

    v.push_back(1); // 1
    cout << "V ka size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    v.push_back(2); // 1, 2
    cout << "V ka size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    v.push_back(3); // 1, 2, 3
    cout << "V ka size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    v.push_back(4); // 1, 2, 3, 4
    cout << "V ka size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    v.push_back(5);
    cout << "V ka size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    // 🗑️ Remove last element
    v.pop_back();
    cout << "Last element hatane ke baad size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    v.pop_back();
    cout << "Second last element hatane ke baad size: " << v.size() << ", Capacity: " << v.capacity() << endl;

    // so the capactiy does not change when we pop elements, it only changes when we add elements
    // but if we want to reduce the capacity, we can use shrink_to_fit() function
    v.shrink_to_fit();
    cout << "Capacity after shrink_to_fit: " << v.capacity() << endl;

    // 🔁 Vector of pairs
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.push_back({3, 4});
    vp.push_back({5, 6});

    cout << "Vector of pairs:" << endl;
    for (auto p : vp)
    {
        cout << p.first << " " << p.second << " " << endl;
    }
    // what does the line auto p : vp do?
    // it iterates over the vector vp and assigns each pair to p one by one. auto is a keyword that automatically deduces the type of p based on the type of elements in vp.
    // so in this case, p will be of type pair<int, int>.

    // how to print a whole vector
    for (int i = 0; i < vp.size(); i++)
    {
        cout << "Vector of pairs using index:" << endl;
        cout << vp[i].first << " " << vp[i].second << " " << endl;
    }

    // 🔍 Difference between push_back and emplace_back
    vector<Student> students;

    // ✅ Using push_back (copy/move)
    Student s1("Krishika", 18);
    students.push_back(s1);

    // ✅ Using emplace_back (constructs in place)
    students.emplace_back("Rohan", 20);

    // Imagine u want to declare the size of the vector beforehand, but u don't know how many elements will be there, so u can use reserve() function to reserve the space for the vector
    vector<int> v1;
    v1.reserve(100); // reserves space for 100 elements
    cout << "V1 ka size: " << v1.size() << ", Capacity: " << v1.capacity() << endl;

    // but the size will still be 0, because we have not added any elements yet

    // declaring vec size 5 and initializing with 0
    vector<int> vec(5, 0); // 5 elements, all initialized to 0
    cout << "Vec ka size: " << vec.size() << ", Capacity: " << vec.capacity() << endl;
    cout << "Vec elements: ";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    cout << endl;
    // Declaring a vector of size 5 and initializing with 1,2,3,4,5
    vector<int> vec1 = {1, 2, 3, 4, 5}; // 5 elements, initialized with 1,2,3,4,5
    cout << "Vec1 ka size: " << vec1.size() << ", Capacity: " << vec1.capacity() << endl;

    vector<int> vec2(5, 100); // 5 elements, all initialized to 100
    cout << "Vec2 ka size: " << vec2.size() << ", Capacity: " << vec2.capacity() << endl;

    // Now iterating over the vector using iterators

    // without iterators:
    cout << "vec1 elements without using iterator: " << vec1[0] << " " << vec1[1] << " " << vec1[2] << " " << vec1[3] << " " << vec1[4] << endl;

    // with iterators:
    vector<int>::iterator it = vec1.begin(); // iterator pointing to the first element of vec1
    // we made a variable "it" that is used to iteratoe over vec1 with using begin whcih points to the first element of vec1

    cout << "First Elemnet: " << *it << endl; // it will print the value of the first element of vec1

    it++;                                      // incrementing the iterator to point to the next element
    cout << "Second Elemnet: " << *it << endl; // it will print the value of the second element of vec1

    it = it + 2;                               // incrementing 2 times the iterator to point to the next element
    cout << "Fourth Elemnet: " << *it << endl; // it will print the value of the fourth element of vec1

    // other fxns like .begin()

    // .end() - points to the element after the last element of the vector
    // for example, if the vector has 5 elements, .end() will point to the 6th element which is not present in the vector
    cout << "End: " << *(vec1.end() - 1) << endl; // it will print the value of the last element of vec1
    // we have to subtract 1 from the end() iterator to get the last element of the vector
    // because end() points to the element after the last element of the vector

    // .rbegin() - points to the last element of the vector
    cout << "Rbegin: " << *(vec1.rbegin()) << endl; // it will print the value of the last element of vec1

    // .rend() - points to the element before the first element of the vector
    cout << "Rend: " << *(vec1.rend() - 1) << endl; // it will print the value of the first element of vec1
    // we have to subtract 1 from the rend() iterator to get the first element of the vector
    // because rend() points to the element before the first element of the vector
    // so we have to subtract 1 from the rend() iterator to get the first element of the vector

    // r end is reverse end and r begin is reverse begin

    // alternately we use for loops to iterate over the vector

    for (vector<int>::iterator it = vec1.begin(); it != vec1.end(); it++)
    {
        cout << *it << " "; // it will print the value of the first element of vec1
    }
    cout << endl;

    // but we dont need to constantly use so big syntax as we are using stl!!!!!!!!! things r made to be easy in here!!!!!!!!!!
    // so we can use auto keyword to automatically deduce the type of the iterator
    for (auto mit = vec1.begin(); mit != vec1.end(); mit++)
    {
        cout << *mit << " ";
    }
    // here i replace it to mit to mae u understadn that we can name the iterator anything we want, it is just a variable name
    // also i used auto which automatically gives the data type of the iterator based on the type of elements in vec1.
    // // so in this case, mit will be of type vector<int>::iterator.
    // auto is basicallt auto assignation of the data type

    // for eg
    // auto x = 5; // x will be of type int
    // auto y = 5.5; // y will be of type double
    // auto z = "Hello"; // z will be of type string

    // THE OTHER WAY OF ITERATING IS USING RANGE BASED FOR EACH LOOP

    for (auto it : vec2)
    {
        cout << it << " ";
    }
    // here we did not use * because it is not an iterator, it is a normal variable that takes the value of each element of the vector one by one.
    // so it will print the value of each element of vec2 one by one

    // now erase function
    // it is used to remove elements from the vector
    // it takes the iterator as input and removes the element pointed by the iterator
    // for example, if we want to remove the first element of the vector, we can do it like this:
    vec1.erase(vec1.begin()); // removes the first element of vec1

    // vec1 intially: 1 2 3 4 5
    // after erasing first element: 2 3 4 5

    cout << "\nAfter erasing first element: ";
    for (auto it : vec1)
    {
        cout << it << " ";
    }
    cout << endl;
    vec1.push_back(6);
    for (auto it : vec1)
    {
        cout << it << " ";
    }

    cout << "\n usage of pop_back: ";
    vec1.pop_back(); // removes the last element of vec1
    // vec1 intially: 2 3 4 5 6
    // after erasing last element: 2 3 4 5
    cout << "\nAfter erasing last element: ";
    for (auto it : vec1)
    {
        cout << it << " ";
    }

    // now if u want to remvoe a set of element from a vector like 2 or 3 or more element this is how u can
    vec1.erase(vec1.begin() + 1, vec1.begin() + 3);
    // this will remove the elements from index 1 to index 3 (exclusive) from the vector
    // vec1 intially: 2 3 4 5
    // after erasing elements from index 1 to index 3: 2 5

    cout << "\nAfter erasing elements from index 1 to index 3: ";
    for (auto it : vec1)
    {
        cout << it << " ";
    }

    // insert function
    // it is used to insert elements in the vector at a specific position

    vec1.insert(vec1.begin() + 1, 3); // inserts 3 at index 1 of vec1
    vec1.insert(vec1.begin() + 2, 4); // inserts 4 at index 2 of vec1
    // vec1 intially: 2 5
    // after inserting 3 at index 1: 2 3 4 5
    cout << "\nAfter inserting 3 and 4 at index 1 and 2: ";
    for (auto it : vec1)
    {
        cout << it << " ";
    }

    // other functions

    // clear() - removes all elements from the vector
    // vec1.clear(); // removes all elements from vec1
    // cout<< "\nAfter clearing the vector: ";
    // for(auto it : vec1){
    //     cout<<it <<" "; // it will not print anything because the vector is empty
    // }
    // cout<<endl;

    // size() - returns the size of the vector
    cout << "\nSize of vec1: " << vec1.size() << endl; // it will print 0 because the vector is empty

    // copy() - copies the elements of the vector to another vector
    vector<int> vec3 = vec1; // copies the elements of vec1 to vec3
    cout << "\nElements of vec3: ";
    for (auto it : vec3)
    {
        cout << it << " "; // it will print the elements of vec3
    }

    // swap() - swaps the elements of two vectors
    vec1.swap(vec2);
    cout << "\nElements of vec1 after swapping with vec2: ";
    for (auto it : vec1)
    {
        cout << it << " "; // it will print the elements of vec2
    }

    cout << "\nElements of vec2 after swapping with vec1: ";
    for (auto it : vec2)
    {
        cout << it << " "; // it will print the elements of vec1
    }

    return 0;
}
