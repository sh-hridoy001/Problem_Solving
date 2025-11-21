#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100001];

    while (cin.getline(str, 100001))
    { 
        char temp[100001];
        int index = 0;

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] != ' ')
            {
                temp[index] = str[i];
                index = index + 1;
            }
        }

        sort(temp, temp + index);
        for (int i = 0; i < index; i++)
        {
            cout << temp[i];
        }
        cout << endl;
    }
    return 0;
}
