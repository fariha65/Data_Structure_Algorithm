///linear search
#include<stdio.h>
int main()
{
    int a[100],i,j,temp,n,l=0,key;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("\nEnter elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting : ");
      for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("\nEnter a search key: ");
    scanf("%d",&key);

    for(i=1;i<=n;i++)
    {
        if(key==a[i])
        {
            l=i;
            printf("%d key location is %d",a[i],l);
        }

    }
    if(l==0)
    {
        printf("item not found.");
    }

}
