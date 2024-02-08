#include <stdio.h>

int main() {
    int n, m, temp;

    printf("Enter first number: ");
    scanf("%d", &n); // read an integer input from the user

    printf("Enter second number: ");
    scanf("%d", &m); // read an integer input from the user

    //to swap to numbers without temporary variable
    // some simple arithmetic is applied

    n = n + m;
    m = n - m;
    n = n - m;

    // print the output on the screen
    printf("Numbers after swapping are %d %d\n", n, m);

    return 0;
}
