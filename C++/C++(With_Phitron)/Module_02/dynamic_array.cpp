// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int *func()
{
    int* arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int *x = func();
    for(int i=0; i<5; i++){
        cout<<x[i] <<" " ;
    }
    return 0;
}