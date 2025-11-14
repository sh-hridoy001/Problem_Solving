#include <stdio.h>
#include <stdbool.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 0;
    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j)
                {
                }
                else
                {
                    if (arr[i][j] != 0)
                    {
                        flag++;
                    }
                }
            }
        }
        if (flag == 0)
        {
            printf("It's a diagonal Matrix");
        }
        else
        {
            printf("It's not a diagonal Matrix");
        }
    }
    else
    {
        printf("It's not a diagonal Matrix");
    }

    return 0;
}