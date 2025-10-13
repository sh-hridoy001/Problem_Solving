#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int n;
        scanf("%d", &n);
        while (n != 0)
        {
            printf("%d ", n % 10);
            n = n / 10;  

        }
        printf("\n");
    }
    return 0;
}