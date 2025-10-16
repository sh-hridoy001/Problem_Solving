#include <stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX ;
    int index;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
            index = i ;
        }
    }
    printf("%d %d", min,index+1 );
    return 0;
}
//accepted in codeforces* 