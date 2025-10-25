#include <stdio.h>
#include <string.h>

int main()
{
    // find the number of repited alphabets - -- -- --  -- -- -
    char str[10001];
    scanf("%s", str);

    int count[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c - %d\n", i + 97, count[i]);
        }
    }
    return 0;
}