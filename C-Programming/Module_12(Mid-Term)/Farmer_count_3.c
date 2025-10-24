#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int M1, M2, D;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &M1, &M2, &D);
        int total_M = M1 + M2;
        int total_day = (M1 * D) / total_M;
        int day = (D - total_day);
        printf("%d\n", day);
    }

    return 0;
}