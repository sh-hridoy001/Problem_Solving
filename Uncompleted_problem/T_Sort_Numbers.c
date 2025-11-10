#include <stdio.h>

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<3; i++){
        for(int j=2; j>=1; j++ ){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

        // printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}