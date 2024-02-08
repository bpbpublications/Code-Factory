/*
Take percentage marks of ten students as input
from the user and assign them class rank.
*/

#include<stdio.h>

int main()
{
int n=10;
int m_l[10];
int m_s[10];
int ii, jj, t;

printf("Enter the percentage marks of 10 students: ");
for(ii=0; ii<n; ii++)
{
    scanf("%d", &m_l[ii]);
    m_s[ii]=ii+1;
}

for(jj=0; jj<n-1; jj++)
    {
        for(ii=0; ii<n-jj-1; ii++)
    {
        if(m_l[ii] < m_l[ii+1])
        {
            t=m_l[ii];
            m_l[ii]=m_l[ii+1];
            m_l[ii+1]=t;

            t=m_s[ii];
            m_s[ii]=m_s[ii+1];
            m_s[ii+1]=t;
        }
    }
    }
printf("Students in order of their ranking are ");
for(ii=0; ii<n; ii++)
{
   printf("%d ", m_s[ii]);
}
return(0);
}
