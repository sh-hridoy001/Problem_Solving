#include<stdio.h>

int func(){
    int x = 200;
    printf("Function er Address: %p\n", &x);
}

int main(){
    int x = 100;
    func(x);
    printf("Main Function er Address: %p\n", &x);
    printf("%d",x);

    return 0;
}