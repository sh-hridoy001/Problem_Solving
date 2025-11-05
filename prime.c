#include <stdio.h>

void prime(){
    
}

int main()
{
    int tc;
    scanf("%d", &tc);
    while (tc--)
    {

        int n;
        int notPrime = 0;
        scanf("%d",&n);
        for (int i = 2; i <= n / 2; i++)
        {
            if(n%i==0){
                notPrime++ ;
            }
        }
        if(notPrime>0){
            printf("NO\n");
            
        }else{
            printf("YES\n");
        }
    }

    return 0;
}