#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int mx = INT_MIN;
    int mxIndex, mnIndex;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            mxIndex = i;
        }
        if (arr[i] < mn)
        {
            mn = arr[i];
            mnIndex = i;
        }
    }
    int temp = arr[mnIndex];
    arr[mnIndex] = arr[mxIndex];
    arr[mxIndex] = temp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

//accepted in codeforces*