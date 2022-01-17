#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the Numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d,b=%d,c=%d\n",a,b,c);
    if(a>b)
    {
        if(a>c)
            printf("%d is the largest",a);
        else
            printf("%d is the largest",c);
    }
    else
    {
        if(b>c)
            printf("%d is the largest",b);
        else
            printf("%d is the largest",c);
    }
    getch();
    return 0;
}
