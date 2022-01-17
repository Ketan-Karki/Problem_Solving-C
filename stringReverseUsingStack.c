#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 20
int top=-1;
char stack[MAX];
void push(char);
char pop();
int main()
{
    char str[20];
    int i;
    printf("Enter the string: ");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        push(str[i]);
    }
    for(i=0;i<strlen(str);i++)
    {
        str[i]=pop();
    }
    printf("Reversed String: ");
    puts(str);
    getch();
    return 0;
}

push(char item)
{
    if(top==MAX-1)
        printf("Stack Overflow\n");
    else
        stack[++top]=item;
}

char pop()
{
    if(top==-1)
        printf("Stack Underflow\n");
    else
        return stack[top--];
}
