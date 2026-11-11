// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int current_stack = 0;
        int max_stack = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > 0)
            {
                current_stack++;
            }
            else
            {
                current_stack = 0;
            }
            max_stack = max(max_stack, current_stack);
        }
        cout << max_stack << endl;
    }
    return 0;
}