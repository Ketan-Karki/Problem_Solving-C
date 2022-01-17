#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],b[10],c[10],m,n,i,j,k=0;
    printf("\nEnter the number of elements in Set A: ");
    scanf("%d",&m);
    printf("\nEnter elements of set A:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number of elements in Set B: ");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("\nIntersection of set A and set B: ");
    for(i=0;i<m;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                k=1;
            }
            if(k==1)
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    if(k==0)
    {
        printf("NULL");
    }
    return 0;
}
