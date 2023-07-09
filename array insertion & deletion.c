/*///insertion
#include<stdio.h>
int main()
{
    int a[100],key,l,n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\nEnter %d elements:",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter key loation: ");
    scanf("%d",&l);
    printf("\nEnter the key: ");
    scanf("%d",&key);

    for(i=n;i>=l;i--)
    {
        a[i+1]=a[i];
    }
    a[l]=key;
    n=n+1;
    printf("\nAfter inserting :");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
}*/
#include<stdio.h>
int main()
{
    int a[100],key,l,n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("\nEnter %d elements:",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter key loation: ");
    scanf("%d",&l);
    printf("\nEnter the key: ");
    scanf("%d",&key);
    key=a[l];
    for(i=l;i<=n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;

       printf("\nAfter deleting :");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
}
}
