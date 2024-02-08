#include <stdio.h>

int main() {
int n, i, x, flag = 0;
printf("Enter the size of the list: ");
scanf("%d", &n);
int a[n];
printf("Enter the elements of the list:\n");
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
printf("Enter the element to be searched: ");
scanf("%d", &x);
for (i = 0; i < n; i++) {
if (a[i] == x) {
flag = 1;
break;
}
}
if (flag == 1) {
printf("%d is present at position %d in the list.\n", x, i+1);
}
else {
printf("%d is not present in the list.\n", x);
}
return 0;
}
