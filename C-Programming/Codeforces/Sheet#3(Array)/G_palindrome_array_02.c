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
    int i = 0, j = n - 1;
    int palindrome = 1;
    while ((i < j))
    {
        if (arr[i] != arr[j])
        {
            palindrome = 0;
            break;
        }
        else
        {
            palindrome = 1;
            i++;
            j--;
        }
    }
    if (palindrome == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}