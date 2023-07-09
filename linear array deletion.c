/*#include<stdio.h>
int main()
{
    int arr[100],k,item,n,i;
    printf("\nEnter size of array:");
    scanf("%d",&n);
    printf("\nEnter %d elements:",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter delete item:");
    scanf("%d",&item);
    printf("\nDelete ittem location:");
    scanf("%d",&k);
    item=arr[k];
    for(i=k;i<=n-1;i++)
    {
        arr[i]=arr[i+1];

    }
     n=n-1;

    printf("Display the array after deletion:");
    for(i=1;i<=n;i++)
    {
        printf(" %d ",arr[i]);
    }
}

*/
#include<stdio.h>
int main()
{
    int a[50],i,n,pos,v;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("the element are:\n",n);
    for(i=1;i<=n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("enter the position: \n");
    scanf("%d",&pos);
    printf("enter the delete value: \n");
    scanf("%d",&v);
    v=a[pos];
    for(i=pos;i<=n-1;i++)
    {
        a[i]=a[i+1];

    }
    n=n-1;
    printf("deletion array is:\n");
    for(i=1;i<=n;i++)
    {
        printf(" %d\n",a[i]);
    }
return 0;

}
