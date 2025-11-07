#include <stdio.h>

int count_before_one(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            return i;
        }
    }
    return n;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result= count_before_one(arr, n);
    printf("%d", result);
    return 0;
}