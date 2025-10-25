#include <stdio.h>
#include <string.h>

int main()
{
    // find number of capital , small and digit -------------
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        char str[10001];
        scanf("%s", str);
        int lenght = strlen(str);
        int capital = 0, small = 0, digit = 0;
        for (int i = 0; i < lenght; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                capital++;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                small++;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small, digit);
    }

    return 0;
}