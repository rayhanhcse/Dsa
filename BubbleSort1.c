#include <stdio.h>
int main()
{
int array[1000],size, swap;
printf("Bubble Sort\n");
printf("Enter number of elements: ");
scanf("%d", &size);
printf("\nEnter %d integers\n", size);
for (int step = 0; step < size; step++)
scanf("%d", &array[step]);
for ( int step = 0 ; step < size - 1; step++)
{
for (int i = 0 ; i < size - step - 1; i++)
{
if (array[i] > array[i+1])
{
swap = array[i];
array[i] = array[i+1];
array[i+1] = swap;
}
}
}
printf("\nSorted list in ascending order:\n");
for (int step = 0; step < size; step++)
printf("%d\n", array[step]);
return 0;
}
