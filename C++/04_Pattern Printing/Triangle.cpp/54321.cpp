#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for(int i = n; i >= 1; i--){       // outer loop: lines from n to 1
        for(int j = i; j >= 1; j--){   // inner loop: numbers from i down to 1
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}