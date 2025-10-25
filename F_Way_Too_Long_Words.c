#include <stdio.h>
#include <string.h>
int main()
{
    int tc;
    scanf("%d", &tc);
    char str[101];
    while (tc--)
    {
        scanf("%s", str);
        int length = strlen(str);
        if (length <= 10)
        {
            printf("%s\n", str);
        }
        else
        {
            char first_char = str[0];
            int middle_num = length - 2;
            char last_char = str[length - 1];
            printf("%c%d%c\n", first_char, middle_num, last_char);
        }
    }

    return 0;
}

// accepted in codeforces*