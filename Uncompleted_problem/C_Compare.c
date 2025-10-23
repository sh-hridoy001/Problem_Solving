#include <stdio.h>
#include <string.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    for(int i=0; i<=21; i++){
        if(a[i]==b[i]){
            printf("%s", a);
            break;
        }else if(a[i]<b[i]){
            printf("%s",a);
            break;
        }else if(b[i]<a[i]){
            printf("%s",b);
        }

    }
    return 0;
}