/* Take the name, age, address, and class 12th marks as input
and print as name is age years old, lives in address, and
and scored marks in 12th. */

#include <stdio.h>

int main() {
    char n[100], address[100]; //declared two variable of character type of each of size 100
    int age, m; //declared two variable of integer type

    printf("Enter your name: ");
    gets(n); // read a string as input from the user

    printf("Enter your age: ");
    scanf("%d", &age); // read an integer input from the user

    fflush(stdin); //function to clear input buffer
    printf("Enter your address: ");
    gets(address); // read a string as input from the user

    printf("Enter your marks: ");
    scanf("%d", &m);  // read an integer input from the user

    // print the output on the screen
    printf("%s is %d years old, lives in %s, and scored %d marks in 12th.\n", n, age, address, m);

    return 0;
}
