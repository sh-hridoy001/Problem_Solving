#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    char num[n] ;
    scanf("%s", num);

    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum+num[i]-48 ;
        
    }
    printf("%d", sum);
    return 0;
}

//accepted in codeforces* 