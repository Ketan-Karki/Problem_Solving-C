#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],b[10],c[10],m,n,i,j,k;
    printf("\nEnter the number of elements in Set A: ");
    scanf("%d",&m);
    printf("\nEnter elements of set A:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("\nEnter the number of elements in Set B: ");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
        c[m+j]=b[j];
    }
    printf("\nUnion of set A and set B is: ");
    for(i=0;i<m+n;i++)
    {
        k=0;
        for(j=i+1;j<m+n;j++)
        {
            if(c[i]==c[j])
            {
                k=1;
                break;
            }
        }
        if(k==0)
        {
            printf("%d ",c[i]);
        }
    }
    return 0;
}
