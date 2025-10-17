// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    for(int i=1;i<=n;i++){
        if(i%1==0 && i%i==0){
            continue;
            cout<<i<<endl;
        }
    }
  return 0;
}