#include <stdio.h>

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
                if (i + j != row - 1)
                {
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
            printf("This is a secondary diagonal Matrix");
        }
        else
        {
            printf("This is not a secondary diagonal Matrix");
        }
    }
    else
    {
        printf("This is not a secondary diagonal Matrix");
    }

    return 0;
}