#include <stdio.h>
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        if (i >2)
        {
            continue;
        }
        printf("hi ");
    }
    return 0;
}