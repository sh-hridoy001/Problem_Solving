#include <stdio.h>

int main()
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%s",a);
    for(int i=n; i<=m; i++){
        printf("%c",b[i]);
    }
    return 0;
}