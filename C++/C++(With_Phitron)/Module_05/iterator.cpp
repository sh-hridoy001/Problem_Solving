// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // for(string:: iterator it=s.begin(); it<s.end(); it++){
    //     cout<<*it<<endl;  // iterator ek doroner pointer 
    // }

    // arekta way ,, stirng:: iterator er replace a amr (auto)  key word ta use korte pari,,
    for(auto it = s.begin(); it<s.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}