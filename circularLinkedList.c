#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;


void insertend(int data){

    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;

    if(head == NULL){
        head = newNode;
        tail = newNode;
        newNode->next = head;
    }else {
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
}

void insertbeg(int item)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr -> data = item;
        if(head == NULL)
        {
            head = ptr;
            ptr -> next = head;
        }
        else
        {
            temp = head;
            while(temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp -> next = ptr;
            head = ptr;
        }
    printf("\nNode Inserted\n");
    }
}

void delbeg()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else if(head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted\n");
    }

    else
    {
        ptr = head;
        while(ptr -> next != head)
            ptr = ptr -> next;
        ptr->next = head->next;
        free(head);
        head = ptr->next;
        printf("\nNode Deleted\n");
    }
}

void delend()
{
struct node *ptr, *preptr;
    if(head==NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else if (head ->next == head)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
        ptr = head;
        while(ptr ->next != head)
        {
            preptr=ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr -> next;
        free(ptr);
        printf("\nNode Deleted\n");
    }
}

void display(){
    struct node *current = head;
    if(head == NULL){
        printf("List is empty");
    }
    else{
        printf("Nodes of the circular linked list: \n");
         do{
            printf("%d ", current->data);
            current = current->next;
        }while(current != head);
        printf("\n");
    }
}

int main()
{
   insertend(1);
   insertend(2);
   insertend(3);
   insertend(4);
   insertbeg(5);
   insertbeg(6);
   delbeg();
   delend();
   display();

   return 0;
}
