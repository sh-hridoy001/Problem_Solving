#include <stdio.h>

int main()
{
    // array input ---------
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int position, value;
    scanf("%d %d", &position, &value);

    for (int i = n; i >= position + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}