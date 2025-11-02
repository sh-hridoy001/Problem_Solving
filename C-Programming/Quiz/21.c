#include <stdio.h>

int main()
{
    int num = 1;
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf(" ");
    }
    return 0;
}