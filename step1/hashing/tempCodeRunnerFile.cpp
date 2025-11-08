#include <bits/stdc++.h>
using namespace std;

// Counts occurrences of 'num' in 'arr' of length 'size' using a linear scan.
// This is the traditional straightforward method without any advanced data structures.
//
// Time Complexity: O(size) — each element is checked once.
// Space Complexity: O(1) — uses only fixed extra memory.
// all about number hashing below

int traditionalWayToFindNum(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    // int a[6] = {1, 2, 3, 4, 5, 1};
    // int n;
    
    // cout << "Enter number to find: ";
    // cin >> n;
    
    // int result = traditionalWayToFindNum(a, 6, n);
    
    // cout << "Number " << n << " appears " << result << " times in the array.\n";
    
    // This method is inefficient for very large arrays (e.g., size ~10^10) because
    // it requires scanning every element, resulting in extremely high runtime.
    // For such cases, more efficient methods like hashing or indexing should be used.
    // the time complexity(tc) to find a value in 10^8 size of any array is 1second
    // so if u had to find a value in an array of size 10^10 elements you would have to wait forlike 100 second if you iterate over thewhole arraye once again
    // this is why we use hasharray
    // it basically makes a new arraye and we store the counts of the individual elements in the arraye itself 
    // so for the tc purposes we have hasharray concept where we store the count of the indi elements                     
    // so this is how hashing is used:

    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements of the array:(not larger than 12 as hash size is 13) ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    // precomputation in hasharrays is v necessary
    // precomputing means storing some computed data beforehand for future needs.
    // precomputing
    
    int hasharray[13]={0};

    for(int i=0; i<size; i++){
        hasharray[arr[i]] += 1;
    }
    
    int q;
    cout<<"Enter the number of queries u gotta ask : ";
    cin>>q;

    cout<<"Ask your queries:";

    while(q--){
        int number;
        cin>>number;
        cout<<number<<" appears "<<hasharray[number]<<" time in youre given array"<<endl;
    }

    cout<<"\nnow unecessary yet good for visuals: \n";
    // now for all the outputs 
    for (int i =0; i<13; i++ ){
        cout<<i<<" appears "<<hasharray[i]<<" time in youre given array"<<endl;
    }

    // the thing about arrays you should be aware:
    // if arrays declared inside the functions like main , user defined , etc basically locally, they have a max sixe of 10^6 i.e. 1MB
    // if arrays declared outside the functions , basically globally , they have amaxe size of 10^8 elements 
    // roughly haan 


    // now gpt explanatn obv
    // The thing about arrays you should be aware of:
    //
    // ➤ If arrays are declared **inside functions** (like `main`, user-defined functions, etc.),
    //    they are called **local arrays** and are stored in **stack memory**.
    //    The stack has limited size (typically around 1MB).
    //    ✅ So the max size of such arrays is roughly **10^5 to 2.5×10^5 elements** (i.e., ~1MB for int).
    //
    // ➤ If arrays are declared **outside all functions**, i.e., **globally**,
    //    they are stored in the **data segment** (also called static/global memory),
    //    which is much larger than the stack.
    //    ✅ So you can safely declare arrays up to **10^8 elements** (i.e., 400MB or more).
    //
    // 🔥 Bonus:
    // ➤ If you want even bigger arrays (like 10^9 elements), use **dynamic memory** with `new` or `malloc`.
    //    These are stored in **heap memory**, which can go up to **several GBs**, depending on your RAM.
    //
    // ✅ Example for dynamic array:
    //    int* arr = new int[100000000];  // 100 million integers = 400MB
    //
    // 🛑 Warning:
    //    Never declare huge arrays locally — it can crash your program due to stack overflow.

    // finding min / max frequency element
    int min, max;

    for (int i = 0; i<13; i++){
        if (hasharray[i] > hasharray[i+1]){
            int temp;
            temp = hasharray[i];
            hasharray[i] = hasharray[i+1];
            hasharray[i+1] = temp;
        }

    }

    min = hasharray[0];
    max = hasharray[13];

    cout << "min element : " << min; 
    cout << " max element : " << max;

    return 0;
}
