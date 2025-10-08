#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;
    while ((i <= n))
    {
        if (i % 2 == 0)
        {
            printf("%d - Even\n", i);
        }else{
            printf("%d - Odd\n", i);
        }
        i++ ;
    }

    return 0;
}