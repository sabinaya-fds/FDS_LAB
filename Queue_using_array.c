#include <stdio.h>
#define MAX 50
void insert();
void delete();
void display();
int queue[MAX];
int rear = - 1;
int front = - 1;

void insert(int data)
{
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)  /*If queue is initially empty */
        {
        	front = 0;
		}
        rear = rear + 1;
        queue[rear] = data;
        printf("Element inserted is : %d\n", queue[rear]);
    }
} /* End of insert() */

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("\nElement deleted is : %d\n", queue[front]);
        front = front + 1;
    }
} /* End of delete() */

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
} /* End of display() */
int main()
{
	insert(10);
	insert(20);
	display();
	
	delete();
	display();
	return 0;
}
