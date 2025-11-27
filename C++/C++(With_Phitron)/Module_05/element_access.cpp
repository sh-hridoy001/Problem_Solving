// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int value;
    cin>> value;
    cout<<s[value]<<endl; 
    //also we can access the value using at() function -- -- -- --
    cout<<s.at(value) <<endl;
    //frint the first value of a string --
    cout<<s.front()<<endl;
    cout<<s.back()<<endl;

    return 0;
}