#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%3==0 || i%5==0){
            printf("%d Yes\n",i);
        }else{
            printf("%d No\n", i);
        }
    }

    return 0;
}