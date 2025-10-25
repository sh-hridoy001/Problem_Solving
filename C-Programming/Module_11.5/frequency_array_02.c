#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count[6] = {0};
    for (int i = 0; i < n; i++)
    {
        // i = 0 hole count er 0 number index++ koro, 1 hole 1 number index++ koro.....
        count[arr[i]]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", count[i]);
    }
    return 0;
}