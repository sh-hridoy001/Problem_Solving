#include <stdio.h>
#include<string.h>
int main()
{
    char str[101];
    fgets(str, 101, stdin);
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    printf("%d", size);
    return 0;
}