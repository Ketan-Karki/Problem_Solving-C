#include<stdio.h>
#include<conio.h>

int reverse(int *x,int n)
{
    int i,temp;
    for(i=0;i<(n/2);i++)
    {
        temp=*(x+i);
        *(x+i)=*(x+n-i-1);
        *(x+n-i-1)=temp;
    }
    return 0;
}

int main()
{
    int n,i;
    printf("Enter Size of Array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,n);
    printf("Reversed Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
