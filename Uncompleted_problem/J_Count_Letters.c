#include <stdio.h>
#include <string.h>
int main()
{
    // int arr[10000];   // array
    char str[10005]; // 10^7
    scanf("%s", str);

    int fre_arr[26] = {0};
    int str_len = strlen(str);
    for (int k = 0; k < str_len; k++)
    {
        int idx = str[k] - 'a';
        fre_arr[idx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre_arr[i] != 0)
        {
            printf("%c : %d\n", i + 'a', fre_arr[i]);
        }
    }
    return 0;
}