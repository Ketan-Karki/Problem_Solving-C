#include<stdio.h>
#include<conio.h>

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

void insert(int a[],int n)
{
    int index,element,i;
    printf("Enter Index\n");
    scanf("%d",&index);
    printf("Enter Element to be added\n");
    scanf("%d",&element);
    for(i=n-1;i>=index;i--)
    {
        a[i+1]=a[i];
    }
    a[index]=element;
}

void linearSearch(int a[],int n)
{
    int element,i,flag=0;
    printf("Enter the element to search\n");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            printf("Element found at %d index\n",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Not Found!\n");
    }
}

void binarySearch(int a[],int n)
{
    int element,i,j,temp,flag=0,beg=0,end=n-1;
    printf("Enter the elements\n");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
         if(a[i]>a[j])
         {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(a[mid]<element)
        {
            end=mid-1;
        }
        else if(a[mid]>element)
        {
            beg=mid+1;
        }
        else
        {
            printf("Element found at %d index\n",mid);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Not Found!\n");
    }
}

int main()
{
    int n,i,ch;
    char cont;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {
        printf("Enter your choice\n 1.Display\n 2.Insert\n 3.Delete\n 4.Linear Search\n 5.Binary Search\n");
        scanf("%d",&ch);
        switch(ch)
      {
        case 1:display(a,n);
        break;
        case 2:n=n+1;
        insert(a,&n);
        break;
        case 3:linearSearch(a,n);
        break;
        case 4:binarySearch(a,n);
        break;
        default:printf("Invalid Choice!\n");
        break;
      }
      printf("Press Y if you want to continue\n");
      scanf(" %c",&cont);
    }while(cont=='y' || cont=='Y');
    getch();
    return 0;
}
