
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k < i; k++) {
            printf(" ");
        }
        for (int j = 1; j <= n - i + 1; j++) {
            printf("%d ", n - i + 1);
        }
        for (int l = 1; l < n - i + 1; l++) {
            printf("%d ", n - i + 1);
        }
        printf("\n");
    }

    return 0;
}
