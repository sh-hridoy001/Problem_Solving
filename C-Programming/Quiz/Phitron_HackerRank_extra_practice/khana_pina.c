
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    if (n >= 1000)
    {
        printf("Three Kacchi\n");
    }
    else if (n >= 500)
    {
        printf("One Large Pizza");
    }
    else if (n < 500)
    {
        if (n >= 250)
        {
            printf("Three Small Burger");
        }
        else if (n >= 100)
        {
            printf("Three Fuchka");
        }
        else
        {
            printf("Nothing");
        }
    }
}