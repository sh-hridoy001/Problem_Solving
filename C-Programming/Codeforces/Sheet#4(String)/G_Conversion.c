#include <stdio.h>
int main()
{
    char str[100001];
    fgets(str, 100001, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ',')
        {
            str[i] = ' ';
        }
        if (str[i] > 96 && str[i] < 123)
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] > 64 && str[i] < 91)
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s", str);
    return 0;
}