#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0;
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j || i + j == n - 1)
                { // inside diagonal (check values are 1 or not)
                    if (arr[i][j] != 1)
                    {
                        flag = 1;
                        break;
                    }
                }
                else
                { // outside diagonal (check every values are 0 or not)
                    if (arr[i][j] != 0)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }
        if (flag == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}

//accepted*