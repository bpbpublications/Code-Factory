#include<stdio.h>

int main()
{
char ser, pool;
int dur, dur_pool;
float rate_reg, rate_p;

fflush(stdin);
printf("Enter the type of service (r--> regular, p-->premium): ");
scanf("%c", &ser);

fflush(stdin);
printf("Enter the booking duration (in hrs): ");
scanf("%d", &dur);

fflush(stdin);
printf("Private pool required?(y/n): ");
scanf("%c", &pool);

if(ser == 'r')
{
    rate_reg=50;
    if(dur > 2)
        rate_reg = rate_reg+ (dur-2)*30;
    if(pool=='y')
       {
       printf("Enter duration of pool (in hrs): ");
       scanf("%d",&dur_pool);
       rate_reg = rate_reg+ dur_pool*70;
       }
    printf("The bill amount is %f", rate_reg);
}
else if(ser == 'p')
{
    rate_p=100;
    if(dur > 3)
        rate_p = rate_p+ (dur-3)*50;
    if(pool=='y')
    {
        printf("Enter duration of pool (in hrs): ");
        scanf("%d",&dur_pool);
        if(dur_pool <2)
            rate_p = rate_p+ dur_pool*70;
        else
            rate_p = rate_p+ dur_pool*70*0.95;
    }
    printf("The bill amount is %f", rate_p);
}
else
    printf("Wrong service selected");

return(0);
}
