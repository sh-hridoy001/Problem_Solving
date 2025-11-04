#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 0; j < i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 1; k <= (2 * (n - i) + 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}