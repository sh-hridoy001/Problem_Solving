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
    int positive_sum = 0;
    int negative_sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            positive_sum += arr[i];
        }
        else
        {
            negative_sum += arr[i];
        }
    }
    printf("%d %d",positive_sum, negative_sum);
    return 0;
}