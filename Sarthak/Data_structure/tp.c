#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*tail;

int l , item;
struct node *head;

void create()
{
    head = 0;

    struct node *Newnode;
    Newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d" , &Newnode->data);
   
    Newnode->next=tail;
    Newnode=tail;
   
}

void display()
{
    struct node *temp;

    temp=tail;

    while(temp->next!=head)
    {
        printf("%d->" , temp->data);
        temp=temp->next;
        l++;
    }
    
}

void inserbigin()
{
    
    struct node *Newnode;
    Newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d" , &Newnode->data);

    Newnode->next=0;

    if(tail==0)
    {
        tail=Newnode;
        tail->next=Newnode;
    }

    else
    {
        Newnode->next=tail->next;
        tail->next=Newnode;
    }

    tail->next->data;
}

void insertend()
{
    struct node *Newnode;
    Newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d" , &Newnode->data);

    Newnode->next=0;

    if(tail==0)
    {
        tail=Newnode;
        tail->next=Newnode;
        tail=Newnode;
    }

    else
    {
        Newnode->next=tail->next;
        tail->next=Newnode;
    }
}

void insertpos()
{
    struct node *Newnode;
    struct node *temp;

    int i=1,pos;

    printf("Enter the pos: ");
    scanf("%d" , &pos);

    

    if(pos<0 && pos>l)
    {
        printf("Inevlaid");
    }

    else if(pos==1)
    {
        inserbigin();
    }

    else
    {   
        Newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter the data: ");
        scanf("%d" , &Newnode->data);
        Newnode->next=0;
        temp=tail->next;

        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }

        Newnode->next=temp->next;
        temp->next=Newnode;
    }


}



void main()
{
    create();
    create();
    create();
    display();
    inserbigin();
    display();
    insertend();
    display();

}