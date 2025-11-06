#include <stdio.h>
#include <limits.h>
void findMinMax(int ar[], int x)
{
    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < x; i++)
    {
        if (ar[i] < mn)
        {
            mn = ar[i];
        }
        else if (ar[i] > mx)
        {
            mx = ar[i];
        }
    }
    printf("%d %d", mn, mx);
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
    findMinMax(arr, n);
    return 0;
}