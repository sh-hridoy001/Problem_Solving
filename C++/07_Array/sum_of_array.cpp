// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 3, 2, 1, 4};
    int sum = 0;
    for (int i = 0; i <= 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}