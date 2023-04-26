#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head;

void insertbigin()
{
    struct node *Newnode;
    struct node *temp;
    int value;

    Newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d" , &value);

    if(head==NULL)
    {
        Newnode->data=value;
        Newnode->prev=NULL;
        Newnode->next=NULL;
        head=Newnode;
    }

    else
    {
        Newnode->data=value;
        Newnode->prev=NULL;
        Newnode->next=head;
        head=Newnode;
    }
}

void insertend()
{
    struct node *Newnode;
    struct node *temp;
    int value;

    Newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d" , &value);

    if(head==0)
    {
        Newnode->data=value;
        Newnode->next=NULL;
        Newnode->prev=NULL;
        head=Newnode;
    }

    else
    {   
        temp=head;
        while(temp->next!=NULL)
        {
           temp=temp->next;
        }

        Newnode->data=value;
        temp->next=Newnode;
        Newnode->prev=temp;
        Newnode->next=NULL;
        
    }
}

void posinsert()
{
    struct node *Newnode;
    struct node *temp;
    int value;
    int pos;
    int i;

    Newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d" , &value);

    printf("enter the pos: ");
    scanf("%d" , &pos);

    if(head==0)
    {
        Newnode->data=value;
        Newnode->next=NULL;
        Newnode->prev=NULL;
        head=Newnode;
    }

    else
    {   Newnode->data=value;
        struct node *temp1;
        temp=head;
        temp1=temp->next;

        while(i<pos)
        {
            temp=temp->next;
            i++;
        }


        Newnode->prev=temp;
        Newnode->next=temp1;
        temp1->prev=Newnode;       
    }
}

void deletebigin()
{
    struct node *temp;

    if(head==NULL)
    {
        printf("Underflow");
    }

    else
    {
        if(head->next==NULL)
        {
            printf("%d" , head->data);
            free(head);
            head=NULL;
        }

        else
        {
            temp=head;
            head=head->next;
            free(temp);
            head->prev=NULL;
        }
    }
}

void deleteend()
{
    struct node *temp;
    struct node *temp1;

    if(head==NULL)
    {
        printf("Underflow");
    }

    else
    {
        if(head->next==NULL)
        {
            printf("%d" , head->data);
            free(head);
            head=NULL;
        }

        else
        {
            temp=head;
            while(temp->next!=0)
            {
                temp=temp->next;
            }

            temp1=temp->prev;
            temp1->next=NULL;
            printf("%d" , temp->data);
            free(temp);
        }
    }
}