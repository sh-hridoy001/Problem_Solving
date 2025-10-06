#include<stdio.h>

int main()
{
    int number ; printf("Enter a Number: "); scanf("%d",&number) ;
    if(number>=0){
        printf("Positive Number.\n");
    }else{
        printf("Negetive Number.\n") ;
    }
    return 0 ;
}