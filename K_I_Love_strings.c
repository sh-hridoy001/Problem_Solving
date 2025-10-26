#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int tc;
    scanf("%d", &tc);

    while ((tc--))
    {
        char a[101], b[101];

        scanf("%s %s", a, b);

        int lenght_a = strlen(a);
        int lenght_b = strlen(b);
        int mini = fmin(lenght_a, lenght_b);

        for (int i = 0; i < mini; i++)
        {
            printf("%c%c", a[i], b[i]);
        }
        if (lenght_a < lenght_b)
        {
            for (int i = lenght_a; i < lenght_b; i++)
            {
                printf("%c", b[i]);
            }
        }
        else if (lenght_a > lenght_b)
        {
            for (int i = lenght_b; i < lenght_a; i++)
            {
                printf("%c", a[i]);
            }
        }
        printf("\n") ;
    }

    return 0;
}