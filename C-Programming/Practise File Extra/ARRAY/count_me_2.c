#include <stdio.h>
#include <string.h>

int main()
{
    char str[100005];
    scanf("%s", str);
    int lenght = strlen(str);
    int consonant = 0;
    for (int i = 0; i < lenght; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            continue;
        }
        else
        {
            consonant++;
        }
    }
    printf("%d", consonant);
    return 0;
}