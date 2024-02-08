#include <stdio.h>

int main() {
    int n, m, p, r;

    printf("Enter first number: ");
    scanf("%d", &n); // read an integer input from the user

    printf("Enter second number: ");
    scanf("%d", &m); // read an integer input from the user

    p = n / m; //performed division to obtain quotient
    r = n % m; // obtained remainder using % operator

    printf("Quotient = %d Remainder = %d\n", p, r); // print the output on the screen

    return 0;
}
