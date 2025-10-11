#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    int digit = (int)x;

    if (digit >= 65 && digit <= 90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else if (digit >= 97 && digit <= 122)
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }else{
        printf("IS DIGIT\n");
    }

    return 0;
}

//accepted in codeforces*