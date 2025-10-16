#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int num ;
    scanf("%d", &num);
    int sum =0;
    while ((num!=0))
    {
        num = num%10 ;
        sum = sum + num ;
        num = num/10 ;
    }
    printf("%d",sum);
    return 0;
}