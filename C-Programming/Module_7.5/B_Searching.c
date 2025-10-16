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

    int value;
    scanf("%d", &value);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            printf("%d",i);
            found = 1;
            break;
        }
    }
    if(!found){
        printf("-1");
    }
    return 0;
}

//accepted in codeforces* 