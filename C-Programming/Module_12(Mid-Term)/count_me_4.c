#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    scanf("%s", str);

    int fre[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        fre[str[i]]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] == 0)
        {
            continue;
        }
        else
        {
            printf("%c - %d\n",str[i], fre[i]);
        }
    }
    return 0;
}


// 
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[10000005];
//     scanf("%s", str);
//     int fre_arr[26] = {0};
//     int str_len = strlen(str);
//     for (int i = 0; i < str_len; i++)
//     {
//         int idx = str[i] - 'a';
//         fre_arr[idx]++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (fre_arr[i] != 0)
//         {
//             printf("%c : %d\n", i + 'a', fre_arr[i]);
//         }
//     }
//     return 0;
// }