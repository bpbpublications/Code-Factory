#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int L2[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(L2) / sizeof(L2[0]);
    int L1[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime(L2[i])) {
            L1[count++] = L2[i];
        }
    }
    printf("L1 = { ");
    for (int i = 0; i < count; i++) {
        printf("%d ", L1[i]);
    }
    printf("}\n");
    return 0;
}

