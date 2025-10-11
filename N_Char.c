#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    int digit = (int)x;

    if (digit >= 65 && digit <= 90)
    {
        char latter = (char)digit + 32;
        printf("%c", latter);
    }
    else if (digit >= 97 && digit <= 122)
    {
        char latter = (char)digit - 32;
        printf("%c", latter);
    }

    return 0;
}

// accepted in codeforces* 