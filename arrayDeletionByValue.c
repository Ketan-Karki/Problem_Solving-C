#include<stdio.h>
#include<conio.h>

int main()
{
    int VAL,n,i,j,k;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value to be deleted: ");
    scanf("%d",&VAL);
    for(i=0;i<n;i++)
    {
        if(a[i]==VAL)
        {
            k=i;
            break;
        }
    }
    for(i=k+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    n--;
    printf("Array after deletion:");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
