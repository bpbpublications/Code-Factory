/*Take your name as input and print Hello name.*/

#include <stdio.h>

int main()  //The execution of C program starts with main function
{
    char name[100]; //declared a variable of character type of size 100.
    printf("Enter your name: ");
    gets(name);  // read a input from the user
    printf("Hello %s", name);   // print the name on the screen
    return 0;   // The main() function returns an integer value 0
}
