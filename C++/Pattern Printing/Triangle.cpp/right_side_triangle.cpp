// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cout<<"Enter N: "; cin>> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i ; j++){
            cout<<"  " ;
        }
        for(int x=1; x<=i ;x++){
            cout<<"* " ;
        }
        cout<<endl ;
    }
  return 0;
}