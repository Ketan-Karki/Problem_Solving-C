#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rev=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int x=n;
    while(n>0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(x==rev)
        printf("palindrome");
    else
        printf("not a palindrome");
    getch();
    return 0;
}
