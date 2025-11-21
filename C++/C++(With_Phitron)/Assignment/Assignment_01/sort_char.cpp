// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100001];
    cin.getline(str, 100001);
    cin.ignore();
    sort(str, str + strlen(str));
    cout << str;

    return 0;
}