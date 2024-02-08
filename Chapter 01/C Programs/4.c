#include <stdio.h>

int main() {
    int n, m, sum; //declared three variable of integer type


    printf("Enter first number: ");
    scanf("%d", &n); // read an integer input from the user

    printf("Enter second number: ");
    scanf("%d", &m); // read another integer input from the user

    sum = n + m; //performed addition of two numbers

    printf("Sum = %d\n", sum);  // print the output on the screen

    return 0;
}
