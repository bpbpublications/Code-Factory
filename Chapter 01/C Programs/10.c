#include <stdio.h>

int main() {
    int n;

    printf("Enter a number ");
    scanf("%d", &n); // read an integer input from the user

    // print the square of the number on the screen
    printf("Square of %d is %d\n", n, n*n);

    return 0;
}
