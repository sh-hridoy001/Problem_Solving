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

    int fre[6] = {0};
    for (int i = 0; i < n; i++)
    {
        int value = arr[i]; 
        fre[value]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", fre[i]);
    }

    return 0;
}