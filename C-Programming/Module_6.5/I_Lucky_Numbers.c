#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int last_num = n % 10;
    int first_num = n / 10;
    if (last_num % first_num == 0 || first_num % last_num == 0)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}

//accepted in codeforces*