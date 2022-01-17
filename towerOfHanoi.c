#include<stdio.h>
#include<conio.h>

void hanoi(int n,char a,char b,char c)
{
    if(n==1)
        printf("Move disc %d from %c->%c\n",n,a,c);
    else
    {
        hanoi(n-1,a,c,b);
        printf("Move disc %d from %c->%c\n",n,a,c);
        hanoi(n-1,b,a,c);
    }
}

int main()
{
    int disc;
    printf("Enter number of discs ");
    scanf("%d",&disc);
    hanoi(disc,'A','B','C');
    return 0;
}
