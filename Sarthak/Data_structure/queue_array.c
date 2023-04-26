#include<stdio.h>
#include<conio.h>

int queue[10],num,front=-1,rear=-1,size=3;

void enqueue()
{
    printf("Enter the number: ");
    scanf("%d" , &num);

    if(rear==size-1)
    {
        printf("Overflow");
    }

    else
    {
        if(rear==-1 && front==-1)
        {
            front=rear=0;
        }

        else
        {
            rear=rear+1;
            queue[rear]=num;   
        }
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Underflow");
    }

    else
    {
        if(front==rear)
        {
            printf("Deleted element is %d" , queue[front]);
            front=rear-1;
        }

        else
        {
            printf("Deleted elemt is %d" , queue[front]);
            front=front+1;
        }
    }
}

void display()
{
    int i;

    if(front==-1 && rear==-1)
    {
        printf("Empty queue");
    }

    else
    {    
        for(i=front;i<=front;i++)
        {
            
            printf("%d" , queue[i]);
        }
    }
}

void main()
{
    enqueue();
    enqueue();
    enqueue();
    display();
    dequeue();
    display();
}