#include<stdio.h>
void main()
{
int l[]={2, 6, 8, 9, 5, 4};

int i ;
for (i =1; i< 5; i++)
{
    if ((l[i] >l[i-1])&& (l[i] < l[i+1]))
{
        printf("%d ", l[i] );

}

}
}
