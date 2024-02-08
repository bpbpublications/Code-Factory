/*
Take marks of n students an input from user.
Obtain a subset of m students in a way that minimizes
the difference between the highest and lowest scorers in that subset.
For Example:
Let marks[] = {50, 70, 10, 90, 20, 100, 30} and m = 3
Output :
Subset is {10, 20, 30}.
Difference is 20

*/

#include<stdio.h>

int main()
{

int st_l[100];
int nn, ii, jj, mm, min_no, diff[100], ind, t;

printf("Enter the number of students: ");
scanf("%d", &nn);
min_no=200;
printf("Enter Marks of the students: ");
for(ii=0; ii<nn; ii++)
    scanf("%d", &st_l[ii]);

printf("Enter the group size: ");
scanf("%d", &mm);

for(jj=0; jj<nn-1; jj++)
    {
    for(ii=0; ii<nn-jj-1; ii++)
    {
        if(st_l[ii] > st_l[ii+1])
        {
            t=st_l[ii];
            st_l[ii]=st_l[ii+1];
            st_l[ii+1]=t;
        }
    }
    }
min_no=200;
ind=nn;
for(jj=0; jj<(nn-mm); jj++)
{
    diff[jj]=st_l[jj+mm-1]-st_l[jj];
    if(diff[jj] < min_no)
    {
        min_no=diff[jj];
        ind=jj;
    }
}
printf("Subset is ");
for(jj=ind; jj<ind+mm; jj++)
{
    printf("%d ", st_l[jj]);
}
return(0);
}
