// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[] = {1,2,3,4,5};
  for(int i=0; i<=4; i++){
    cout<<arr[i] <<" " ;
  }

  cout<<endl ;
  cout<<"Reverse Korbo: " ;
  for(int j=4; j>=0; j--){
    cout<<arr[j] <<" " ;
  }
  return 0;
}