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
    int total_element = row * col;
    int zero = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                zero++;
            }
        }
    }
    if (total_element == zero)
    {
        printf("It's a Zero Matrix");
    }
    else
    {
        printf("It's not a Zero Matrix");
    }
    return 0;
}