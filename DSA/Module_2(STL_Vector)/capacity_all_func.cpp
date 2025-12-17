// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // func 1 - size() ------
    vector<int> v = {1, 2, 3, 4, 5};
    cout << v.size() << endl;

    // func 2 - max_size() ------
    cout << v.max_size() << endl;

    // func 3 - capacity() ------
    cout << v.capacity() << endl;

    // func 4 - v.clear() ------
    // Clears the vector elements.Do not delete the memory, only clear the value.
    v.clear();
    cout << v.size() << endl; // size will be zero but element can access from this--

    // func 5 - v.empty() ------
    cout << v.empty()<<endl;

    // func 5 - v.resize() ------
    v.resize(1200);  
    return 0;
}