#include<stdio.h>
void Fibonacci(int num)
{
static int num1=0,num2=1,num3;
if(num>0)
{
num3 = num1 + num2;
num1 = num2;
num2 = num3;
printf("%d ",num3);
Fibonacci(num-1);
}
}
int main()
{
int num;
printf("Enter the number of elements to show: ");
scanf("%d",&num);
printf("\nFibonacci Series: ");
printf("%d %d ",0,1);
Fibonacci(num-2);
printf("\n");
return 0;
}
