// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<< "Enter value: "; cin>> n ;
    for(int x=1; x<=n ; x++){
        for(int i=1; i<=n; i++){
        cout<< (char) (i+64) <<" " ;
        }
      cout<<endl ;
    }
  return 0;
}