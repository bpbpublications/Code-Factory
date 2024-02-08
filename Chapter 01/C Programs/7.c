#include <stdio.h>

int main() {
    int n, m;

    printf("Enter numerator: ");
    scanf("%d", &n); // read an integer input from the user

    printf("Enter denominator: ");
    scanf("%d", &m); // read an integer input from the user

    // print the output on the screen
    //it is obtained by multiplying numerator & denominator by 2, the 3 and then 4
    printf("Equivalent fractions are: %d/%d, %d/%d, %d/%d\n",  n*2, m*2, n*3, m*3, n*4, m*4);

    return 0;
}

