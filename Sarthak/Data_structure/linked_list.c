#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
int count;

void create()
{
    int choice;
    struct node *Newnode;
    struct node *temp;

    while(choice)
    {
        Newnode=(struct node*)malloc(sizeof(struct node));

        printf("Enter the data: ");
        scanf("%d" , &Newnode->data);

        Newnode->next=0;

        if(head==0)
        {
            head=temp=Newnode;
        }

        else
        {
            temp->next=Newnode;
            temp=Newnode;
        }

        printf("Are you insert again the node then press 1 if not press 0: ");
        scanf("%d" , &choice);
    }

}

void display()
{
    struct node *temp;

    temp=head;

    while(temp->next!=0)
    {
       printf("%d->" , temp->data);
       temp=temp->next;
       count++;
    }
}

void inserbigin()
{
    struct node *Newnode;
    struct node *temp;

    Newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d" , &Newnode->data);

    Newnode->next=head;
    head=Newnode;
}

void insertend()
{
    struct node *Newnode;
    struct node *temp;

    Newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d" , &Newnode->data);

    Newnode->next=NULL;

    temp=head;

    while(temp->next!=0)
    {
        temp=temp->next;
    }

    temp->next=Newnode;
}

void insertposition()
{
    struct node *Newnode;
    struct node *temp;
    int pos;
    int i;

    Newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d" , &Newnode->data);

    printf("Enetr the posiotion: ");
    scnaf("%d" , &pos);

    if(pos>count)
    {
        printf("Inavlid pos");
    }

    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }

        temp->next=Newnode->next;
        temp->next=Newnode;

    }
}

void deletebigin()
{
    struct node *temp;
    
    temp=head;
    head=head->next;
    free(temp);

}

void deleteend()
{
    struct node *temp;
    struct node *prevnode;

    temp=head;

    while(temp->next!=0)
    {
        temp=prevnode;
        temp=temp->next;
    }

    if(temp==head)
    {
        head=0;
    }

    else
    {
          prevnode->next=0;
    }


}

void deletepos()
{
    struct node *temp;
    struct node *nextnode;

    int pos;
    int i=1;

    printf("Enter the pos: ");
    scanf("%d" , &pos);

    if(pos>count)
    {
        printf("inavlide");
    }

    else
    {    
        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        temp->next=nextnode;
        temp->next=nextnode->next;
        free(nextnode);
    }
}