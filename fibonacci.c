#include<stdio.h>
#include<conio.h>

int fib(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return(fib(n-1)+fib(n-2));
}

int main()
{
    int n;
    printf("Enter upto which number you want the fibonacci series : ");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
