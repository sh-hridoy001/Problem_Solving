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
    int mini = INT_MAX;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
        if(arr[i]==mini){
            index++ ;
        }
    }
    // printf("%d", mini);
    if (index % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}