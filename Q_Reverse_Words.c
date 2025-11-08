#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int length = strlen(str);
    int i = 0, j = length - 1;
    while ((str[i] != '\0'))
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}