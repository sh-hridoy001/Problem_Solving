#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000005];
    scanf("%s", str);

    int fre[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        fre[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] != 0)
        {
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }
    return 0;
}