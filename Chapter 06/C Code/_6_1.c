/*
An almirah can have m number of bags and each bag can hold
n number of books. Take the capacity of almirah and bag (m and n)
as input from the user. Also take input the number of books user
have (in variable a). Then calculate the number of bags and almirahs
required to store a books.

For example: Capacity of almirah = 5 bags
Capacity of bag = 10 books
Number of books user have: 79
Output: Number of bags required = 8
Number of almirahs required = 2
*/

#include<stdio.h>
#include<math.h>

int main()
{
int cap_al, cap_bag, book, n_bag, n_al;
printf("Enter the capacity of the almirah: ");
scanf("%d", &cap_al);

printf("Enter the capacity of the bag: ");
scanf("%d", &cap_bag);

printf("Enter the Number of books user have: ");
scanf("%d", &book);

n_bag=ceil(book/(float)cap_bag);
n_al=ceil(n_bag/(float)cap_al);

printf("%d bags and %d almirah are required.", n_bag, n_al);
return 0;
}


