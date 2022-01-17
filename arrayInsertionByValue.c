#include<stdio.h>
#include<conio.h>

int main()
{
    int VAL,n,i,k;
    printf("Enter size of array: ");
    scanf("%d",&k);
    int a[k];
    printf("Enter the elements of array \n");
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element and the position in which it should be inserted : ");
    scanf("%d%d",&VAL,&n);
    n--;
    for(i=k;i>n;i--)
    {
        a[i]=a[i-1];
    }
    k++;
    a[i]=VAL;
    printf("Array after insertion: \n");
    for(i=0;i<k;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
