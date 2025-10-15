// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 3, 0, 10, 2, 5, 6};
    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + arr[i];
        }
        else
        {
            sumOdd = sumOdd + arr[i];
        }
    }
    cout << sumEven << endl;
    cout << sumOdd << endl;
    int differnces = sumEven - sumOdd;
    cout << differnces;
    return 0;
}