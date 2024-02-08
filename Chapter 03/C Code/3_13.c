//3.13
#include <stdio.h>

int main() {
int n;
double sum = 0, factorial = 1;
printf("Enter the value of n: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++) {
factorial *= i+1;
sum += i / factorial;
}

printf("Sum of the series is: %lf", sum);
return 0;
}
