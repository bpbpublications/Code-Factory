#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows1, cols1, rows2, cols2, i, j;
    printf("Enter the number of rows of first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of first matrix: ");
    scanf("%d", &cols1);
    printf("Enter the number of rows of second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of second matrix:: ");
    scanf("%d", &cols2);

    if ((rows1 != rows2) || (cols1 != cols2)) {
        printf("\nError: Matrices are not of the same size.\n");
        exit(0);
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], sum[rows1][cols1];

    printf("\nEnter the elements of the first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // input for second matrix
    printf("\nEnter the elements of the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // adding the two matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // printing the resultant matrix
    printf("\nThe sum of the matrices is:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }



    return 0;
}


