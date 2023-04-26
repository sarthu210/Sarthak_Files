#include<stdio.h>
#include<conio.h>

int stack[10],top=-1,size=4,a;

void push()
{
    if(top==size-1)
    {
        printf("Overflow");
    }

    else
    {
        printf("Enter the elemet to push into stack: ");
        scanf("%d" , &a);
        top++;
        stack[top]=a;
        
    }
}
 
void pop()
{
    if(top==-1)
    {
        printf("stack is underflow");
    }

    else
    {
        printf("Sucessfully pop");
        top--;
    }

}

void display()
{   int i;
    if(top==-1)
    {
        printf("stack is empty");
    }

    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d" , stack[i]);
        }
    }

}


void main()
{
    push();
    push();
    push();
    display();
    pop();
    display();
}