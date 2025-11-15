#include <stdio.h>

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {
        int n;
        scanf("%d", &n);
        int arr_A[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr_A[i]);
        }
        int arr_B[n];
        for (int i = 0; i < n; i++)
        {
            arr_B[i] = arr_A[i];
        }

        // sorting array in the ascending order ------

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr_B[i] > arr_B[j])
                {
                    int temp = arr_B[i];
                    arr_B[i] = arr_B[j];
                    arr_B[j] = temp;
                }
            }
        }
        int diff_arr[n];
        for (int i = 0; i < n; i++)
        {
            diff_arr[i] = arr_A[i] - arr_B[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (diff_arr[i] < 0)
            {
                printf("%d ", diff_arr[i] * (-1));
            }
            else
            {
                printf("%d ", diff_arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}

//accepted* 