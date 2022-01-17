#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,l;
    printf("Enter Three Numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    l=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%d is the largest",l);
    getch();
    return 0;
}
