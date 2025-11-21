// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100001];
    cin.getline(str, 100001);   // read full line with spaces

    int len = strlen(str);

    // Step 1: Remove spaces (shift characters)
    int idx = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            str[idx++] = str[i];
        }
    }
    str[idx] = '\0';  // end of new string without spaces

    // Step 2: Sort only the letters
    sort(str, str + idx);

    // Step 3: Output result
    cout << str;

    return 0;
}
