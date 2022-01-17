#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,s=0;
    printf("Enter the value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            s=s+j;
        }
    }
    printf("%d",s);
    getch();
    return 0;
}
