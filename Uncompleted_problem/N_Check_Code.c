#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s[a + b + 1];
    scanf("%d", &s);
    for (int i = 0; i <= a + b; i++)
    {
        if (s[a] == '-')
        {
            printf("Yes");
            break;
        }
        else
        {
            printf("No");
            break;
        }
    }
    return 0;
}