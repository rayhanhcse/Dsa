#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main( )
{
top=-1;
printf("Enter the STACK size (maximum 100):");
scanf("%d",&n);
printf("\nEnter what operations you want to perform :");
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT\n");
do
{
printf("\nEnter the Choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push( );
break;
}
case 2:
{
pop( );
break;
}
case 3:
{
display( );
break;
}
case 4:
{
printf("\n\t EXIT POINT ");
break;
}
default:
{
printf ("\n\tPlease Enter a Valid Choice between 1/2/3/4");
}
}
}
while(choice!=4);
return 0;
}
void push( )
{
if(top>=n-1)
{
printf("\n\tSTACK is FULL!");
}
else
{
printf("Enter a value you want to push in stack: ");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop( )
{
if(top<=-1)
{
printf("\n\t Stack is EMPTY!");
}
else
{
printf("\nThe popped element is %d",stack[top]);
top--;
}
}
void display( )
{
if(top>=0)
{
printf("\nThe elements in STACK are :\n");
for(i=top; i>=0; i--)
printf("\n%d",stack[i]);
}
else
{
printf("\nThe STACK is EMPTY!");
}
}
