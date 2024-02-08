//3.11
#include <stdio.h>

int main() {
int num;

// Accept number from user
printf("Enter a number: ");
scanf("%d", &num);

// Display multiplication table
for (int i = 1; i <= 10; i++) {
printf("%d * %d = %d\n", num, i, num*i);
}

return 0;
}


