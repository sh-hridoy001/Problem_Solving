#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int pyramid_rows = N + 5;  // pyramid height
    int trunk_rows = 5;        // trunk height fixed
    int stars = 1;
    int max_stars = 1 + 2 * (pyramid_rows - 1);

    // Print pyramid
    for(int i = 0; i < pyramid_rows; i++) {
        int spaces = (max_stars - stars) / 2;
        for(int s = 0; s < spaces; s++) printf(" ");
        for(int j = 0; j < stars; j++) printf("*");
        printf("\n");
        stars += 2;
    }

    for (int i = 1; i <= 5; i++)
    {
        for(int k=1; k<=5; k++){
            printf(" ");
        }
        for (int j = 1; j <= N; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
