#include <stdio.h>

int main() {
    int n, m, p;

    printf("Enter first number: ");
    scanf("%d", &n); // read an integer input from the user

    printf("Enter second number: ");
    scanf("%d", &m); // read an integer input from the user

    p = n * m; //performed multiplication of two numbers

    printf("Product = %d\n", p); // print the output on the screen

    return 0;
}
