// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    for(int i=2; i<=n; i++){

        bool isPrime = true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                isPrime = false;
                break; // break na korle hudai loop cholbe ,, jehetu amra jenei gechi its not a prime number..
            }
        }
        if(isPrime){
            cout<<i <<" " ;
        }
    }
  return 0;
}