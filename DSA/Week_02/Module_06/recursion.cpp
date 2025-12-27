// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
void rec(int i, int n){
    if(i>n){
        return;
    }
    rec(i+1, n);
    cout<<i<<" ";
}

int main()
{
    int x;
    cin>> x;
    rec(1,x);
    return 0;
}