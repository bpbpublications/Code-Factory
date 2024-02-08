

#include <stdio.h>

int main() {
    int n, i,j,k,l;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for ( j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        for (l = 1; l < i; l++) {
            printf("%d ", k-l-1);
        }
        printf("\n");
    }

    return 0;
}

