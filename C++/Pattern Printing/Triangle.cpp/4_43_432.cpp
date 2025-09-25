// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cout<<"Enter N: "; cin>> n;
    for(int i=1; i<=n; i++){ // i is for row,, how many row will be.
        for(int j=1; j<=i ; j++){ // j is for column ,,, like:- ....... 1 2 3 4 .........  A B C D ........
            cout<< j <<" ";
        }
        cout<<endl ;
    }
  return 0;
}