#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000001];
    fgets(str, 10000001, stdin);
    // printf("%s", str);
    int length = strlen(str);
    int i = 0;
    while (str[i] != length)
    {
        if (str[i] == ' ')
        {
            for (int i = length - 1; i >= 0; i--)
            {
                printf("%c", str[i]);
            }
        }
    }

    return 0;
}