#include <stdio.h>

int main()
{
int list1[] = {1, 2, 3, 5, 70,11,13};
int list2[] = {21, 42, 63, 82, 10};
int size1 = sizeof(list1) / sizeof(list1[0]);
int size2 = sizeof(list2) / sizeof(list2[0]);
int list3[size1 + size2];
int index = 0;

for(int i = 0; i < size1; i++)
{
if(list1[i] % 2 != 0)
{
list3[index] = list1[i];
index++;
}
}

for(int j = 0; j < size2; j++)
{
if(list2[j] % 2 == 0)
{
list3[index] = list2[j];
index++;
}
}


printf("List 1: ");
for(int i = 0; i < size1; i++)
{
printf("%d ", list1[i]);
}

printf("\nList 2: ");
for(int i = 0; i < size2; i++)
{
printf("%d ", list2[i]);
}

printf("\nList 3: ");
for(int i = 0; i < index; i++)
{
printf("%d ", list3[i]);
}

return 0;
}
