#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        long long mul, a, b, c;
        scanf("%lld %lld %lld %lld", &mul, &a, &b, &c);
        long long num = a * b * c;
        if (mul % num == 0)
        {
            printf("%lld\n", mul / num);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}

//accepted* 