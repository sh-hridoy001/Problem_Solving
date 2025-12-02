// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>> s;
    int len = s.size();
    for(int i=0; i<len; i++){
        if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' &&s[i+4]=='T'){
            cout<<" ";
            i+=4;
        }else{
            cout<<s[i];
        }
    }
    return 0;
}