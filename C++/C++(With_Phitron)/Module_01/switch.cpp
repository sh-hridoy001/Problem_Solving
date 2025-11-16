// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cin >> day;
    switch (day)
    {

    case 1:
        cout << "Saturday\n";
        break;
    case 2:
        cout << "Sunday\n";
        break; // break na dile nicher sob print hoye jabe ----------
    case 3:
        cout << "Monday\n";
        break;
    default:
        cout << "Wrong Input.";
    }

    return 0;
}