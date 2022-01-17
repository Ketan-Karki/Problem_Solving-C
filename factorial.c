#include<stdio.h>
#include<conio.h>
int main()
{
    long int n,f=1,i=1;
    printf("Enter the number\n");
    scanf("%ld",&n);
    if(n<0)
        exit(0);
    else if(n==0)
        printf("%ld is the factorial of %ld",f,n);
    else
    {
        while(i<=n)
        {
            f=f*i;
            i++;
        }
        printf("%ld is the factorial of %ld",f,n);
    }
    getch();
    return 0;
}
