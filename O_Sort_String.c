#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar(); // for newline

    char c;
    int fre[26] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%c", &c);
        fre[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (fre[i]--)
        {
            putchar(i + 'a');
        }
    }
    return 0;
}