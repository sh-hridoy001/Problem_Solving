// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    cout << "Size - " << s.size() << endl;
    cout << "length - " << s.length() << endl; // size and length return the same values ,,
    cout << "capacity- " << s.capacity() << endl;
    cout << "empty- " << s.empty() << endl;
    s.clear(); 
    s.resize(10);
    return 0;
}