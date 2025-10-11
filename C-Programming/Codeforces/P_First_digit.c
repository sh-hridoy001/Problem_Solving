#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int last_digit = n / 1000;
    if (last_digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}

// accepted codeforces*