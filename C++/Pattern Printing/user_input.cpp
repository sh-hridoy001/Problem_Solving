// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n ; cout<< "Enter column number: "; cin>> n ;
    int m ; cout<< "Enter row number: "; cin>> m ;

    for(int x =1 ; x<=m ; x++){
        for(int i =1 ; i<=n ; i++){
        cout<<"* " ;
        }
        cout<< endl ;
    }
  return 0;
}