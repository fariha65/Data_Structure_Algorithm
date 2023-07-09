#include<stdio.h>
int main()
{
    int arr[100],i,k,item,n;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    printf("\nEnter %d elements:",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter a integer number for inserting array:");
    scanf("%d",&item);
    printf("\nEnter insert element location:");
    scanf("%d",&k);
    for(i=n;i>=k;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[k]=item;
    n=n+1;
    printf("\nDisplay the  array after insertion:");
    for(i=1;i<=n;i++)
    {
        printf("\n%d ",arr[i]);
    }
}

