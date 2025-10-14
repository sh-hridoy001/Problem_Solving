#include <stdio.h>

int main()
{
    char n;
    scanf("%c", &n);
    int char_num = (char)n;
    if (char_num >= 90)
    {
        if (char_num == 122)
        {
            printf("a");
        }
        else
        {
            char_num += 1;
            printf("%c", (char)char_num);
        }
    }
    return 0;
}

//accepted in codeforces*