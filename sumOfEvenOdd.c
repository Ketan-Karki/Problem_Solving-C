#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1,se=0,so=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            se=se+i;
            i++;
        }
        else
        {
            so=so+i;
            i++;
        }
    }
    printf("SUM OF ODD NUMBERS: %d\n",so);
    printf("SUM OF EVEN NUMBERS: %d",se);
    getch();
    return 0;
}
