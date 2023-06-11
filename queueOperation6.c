#include<stdio.h>
# define MAX 20
int cqueue_arr[MAX];
int front = -1;
int rear = -1;
void enqueue(int item)
{
if((front == 0 && rear == MAX-1) || (front == rear+1))
{
printf("Queue is FULL! \n");
return;
}
if(front == -1)
{
front = 0;
rear = 0;
}
else
{
if(rear == MAX-1)
rear = 0;
else
rear = rear+1;
}
cqueue_arr[rear] = item ;
}



void dequeue()
{
if(front == -1)
{
printf("Queue is EMPTY! \n");
return ;
}
printf("Dequeued element is : %d\n",cqueue_arr[front]);
if(front == rear)
{
front = -1;
rear=-1;
}
else
{
if(front == MAX-1)
front = 0;
else
front = front+1;
}
}
void display()
{
int front_pos = front,rear_pos = rear;
if(front == -1)
{
printf("Queue is EMPTY!\n");
return;
}
printf("Queue elements :\n");
if( front_pos <= rear_pos )



while(front_pos <= rear_pos)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
else
{
while(front_pos <= MAX-1)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
front_pos = 0;
while(front_pos <= rear_pos)
{
printf("%d ",cqueue_arr[front_pos]);
front_pos++;
}
}
printf("\n");
}
int main()
{
int choice,item;
printf("Choose the operation you want to be performed : \n");
printf("\t1.Enqueue\n");
printf("\t2.Dequeue\n");
printf("\t3.Display\n");
printf("\t4.Quit\n");
do
{



printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1 :
printf("Enqueue the element : ");
scanf("%d", &item);
enqueue(item);
break;
case 2 :
dequeue();
break;
case 3:
display();
break;
case 4:
break;
default:
printf("Choose a valid option between 1/2/3/4 \n");
}
}
while(choice!=4);
return 0;
}
