#include<stdio.h>

int main()
{

int deno[8]={500, 100, 50, 20, 10, 5, 2, 1};
int a_m, s, i, d_freq[8];

printf("Enter the amount: ");
scanf("%d", &a_m);

s=a_m;
for(i=0; i<8; i++)
{
    d_freq[i]=s/deno[i];
    s=s%deno[i];
}

for(i=0; i<8;i++)
    printf("%d : %d;  ", deno[i], d_freq[i]);

return(0);
}
