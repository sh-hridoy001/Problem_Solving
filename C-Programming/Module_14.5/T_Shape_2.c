#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;
        printf("\n");
    }
    return 0;
}