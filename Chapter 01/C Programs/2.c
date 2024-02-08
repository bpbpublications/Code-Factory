/*Take a number as input and print the number as
Number entered by you is: number.  */

#include <stdio.h>

int main() {
    int n;  //declared a variable of integer type
    printf("Enter a number: ");
    scanf("%d", &n); // read a input from the user
    printf("Number entered by you is: %d\n", n); // print the output on the screen
    return 0; // The main() function returns an integer value 0
}
