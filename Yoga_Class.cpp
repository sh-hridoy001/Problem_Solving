// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while ((tc--))
    {
        int n, x, y;
        cin >> n >> x >> y;
        if(x*2>y){
            cout<<n*x<<endl;

        }else{
            // int earn = (n/2 - 1)*y;
            if(n%2==0){
                cout<<n/2*y<<endl;
            }else{
                n = n-1;
                n = (n*y)+x ;
            }

        }
    }

    return 0;
}