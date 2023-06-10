#include <stdio.h>
int main()
{
int size, i, temp;
int array[1000];
printf("Enter number of elements: ");
scanf("%d", &size);
printf("\nEnter %d integers\n", size);
for (int step = 0; step < size; step++)
{
scanf("%d", &array[step]);
}
for (int step = 1 ; step<= size - 1; step++)
{
i = step;
while ( i > 0 && array[i-1] > array[i])
{
temp = array[i];
array[i] = array[i-1];
array[i-1] = temp;
i--;
}
}
printf("\nSorted list in ascending order:\n");
for (int step = 0; step <= size - 1; step++)
{
printf("%d\n", array[step]);
}  
}
