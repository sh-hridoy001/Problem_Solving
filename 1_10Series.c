#include<stdio.h>

int main(){
    int n = 10;
    int sum = 0;
    for(int i=1; i<11; i=i+1){
        sum = sum+i;
    }
    printf("%d", sum);
    return 0;
}