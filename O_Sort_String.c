#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);

    int fre[26] = {0};
    for (int i = 0; i < n; i++)
    {
        fre[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        while (fre[i] > 0)
        {
            printf("%c", i + 'a');
            fre[i]--;
        }
    }
    return 0;
}