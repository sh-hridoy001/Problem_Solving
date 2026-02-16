// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int max = INT_MIN;
    for(int i=1; i<=n; i++){
        int num ;
        cin>>num ;
        if(num>max){
            max = num ;
        }
    }
    cout<<max ;
    return 0;
}

// wil be accepted in codeforces