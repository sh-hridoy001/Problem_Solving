#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count_2 = 0;
    int count_3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            count_2++;
        }
        else if (arr[i] % 2 == 0)
        {
            count_2++;
        }
        else if (arr[i] % 3 == 0)
        {
            count_3++;
        }
    }
    printf("%d %d", count_2, count_3);
    return 0;
}

//accepted in HackerRank* 