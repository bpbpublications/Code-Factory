#include <stdio.h>

int main() {
    int my_array[] = {1, 2, 3, 3, 4, 5, 5, 6, 7, 8, 8};
    int new_array[11];
    int i, j, n, exists;

    n = 0;
    for (i = 0; i < 11; i++) {
        exists = 0;
        for (j = 0; j < n; j++) {
            if (my_array[i] == new_array[j]) {
                exists = 1;
                break;
            }
        }
        if (!exists) {
            new_array[n] = my_array[i];
            n++;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", new_array[i]);
    }

    return 0;
}
