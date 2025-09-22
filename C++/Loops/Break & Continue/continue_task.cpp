// WAP to find out the ood number from 1 to 100   using continue -----------------

// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for( int i = 1 ; i<= 100 ; i++){
        if(i%2==0){
            continue;
        }
        cout<< i <<" ";
    }
  return 0;
}