#include<stdio.h>
#include<conio.h>

int fact(int n,int p)
{
    if(n==0)
        return p;

    return(fact(n-1,n*p));
}

int main()
{
    int n,p=1;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,fact(n,p));
    return 0;
}
