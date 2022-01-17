#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head,*newNode,*temp;
    head=0;
    int choice=1;
    while(choice)
    {
        newNode=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter Data ");
        scanf("%d",&newNode->data);
        newNode->next=0;
        if(head==0)
        {
            head=temp=newNode;
        }
        else
        {
            temp->next=newNode;
            temp=newNode;
        }
        printf("\nDo you want to continue (0,1)? ");
        scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
    getch();
}
