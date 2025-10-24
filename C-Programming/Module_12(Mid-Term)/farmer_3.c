#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int M1, M2, D;

    while (n--)
    {
        scanf("%d %d %d", &M1, &M2, &D);
        int day_need = (D * M1) / (M1 + M2);
        int day = D - day_need;
        printf("%d\n", day);
    }

    return 0;
}

//accepted in HackerRank*