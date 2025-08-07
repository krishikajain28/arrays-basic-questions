#include <bits/stdc++.h>
using namespace std;

class Myclass
{
public:
    bool criteria(int n)
    { // parameter passed
        if (n >= 18)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int n;
    cout << " Enter your age: ";
    cin >> n;

    Myclass c; // class ko call karri hu, c = object
    int result = c.criteria(n);

    if (result == true) // result = true
    {
        cout << "can vote";
    }
    else
    {
        cout << "cannot vote";
    }
}
