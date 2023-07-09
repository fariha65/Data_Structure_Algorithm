#include<stdio.h>
int main()
{
    int a[100],n,i,j,min,temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("\nEnter %d element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");

    printf("\nBefore sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=0;i<n;i++)
    {
         min=i;
         for(j=i+1;j<n;j++)
         {
             if(a[j]<a[min])
             {
                 min=j;
             }
             temp=a[i];
             a[i]=a[min];
             a[min]=temp;
         }
    }

    printf("\nAfter sorting: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");


}
