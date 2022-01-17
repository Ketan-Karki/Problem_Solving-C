#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter value:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}
