#include <stdio.h>

int main() {
    int a[3][3] = {{1,1,1},{0,1,1},{0,0,1}};
    int flag = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i][j] !=a[j][i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            break;
        }
    }
    
    if (flag == 0) {
        printf("Matrix is symmetric \n");
    } else {
        printf("Matrix is not symmetric \n");
    }
    
    return 0;
}
