#include <stdio.h>
int main()
{
int array[1000], search, i, num, count = 0;
printf("Enter number of elements in array: ");
scanf("%d", &num);
printf("\nEnter %d numbers\n", num);
for (i = 0; i < num; i++)
scanf("%d", &array[i]);
printf("\nEnter a number to search: ");
scanf("%d", &search);
for (i = 0; i < num; i++)
{
if (array[i] == search)
{
printf("%d is present at location %d.\n", search, i+1);
count++;
}
}
if (count == 0)
printf("%d isn't present in the array.\n", search);
else
printf("\n%d is present %d times in the array.\n", search, count);
return 0;
}
