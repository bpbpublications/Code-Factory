#include <stdio.h>

int main() {
    int n, m, temp;

    printf("Enter first number: ");
    scanf("%d", &n); // read an integer input from the user

    printf("Enter second number: ");
    scanf("%d", &m); // read an integer input from the user

    temp = n; //store the value of n in a temporary variable
    n = m;  //copy second variable to first one
    m = temp; // copy the value of first variable form temporary variable to second variable.

    // print the output on the screen
    printf("Numbers after swapping are : n = %d, m = %d\n", n, m);

    return 0;
}
