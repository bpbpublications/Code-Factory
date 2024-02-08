#include<stdio.h>
void main()
{
int no_my_toffee, no_sis_choco, my_rs, sis_rs;
printf("Enter No of your toffees ");
scanf("%d", &no_my_toffee);
printf("Enter no of sister toffee ");
scanf("%d", &no_sis_choco);
my_rs = 2 *no_my_toffee;
sis_rs = 10 * no_sis_choco;
if(my_rs>sis_rs)
printf("I spent more money");
else if (my_rs==sis_rs)
printf("We spent equal money");
else
printf("She spent more money");
}
