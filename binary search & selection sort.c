#include<stdio.h>
int main()
{
    int a[100],i,j,n,min,temp,key,l=0,e,m,s;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");


    for(i=1;i<=n;i++)
    {
         min=i;
      for(j=i+1;j<=n;j++)
      {
          if(a[min]>a[j])
          {
              min=j;
          }
          temp=a[i];
          a[i]=a[min];
          a[min]=temp;

      }
    }
     printf("After sorting :");

    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("\nEmter your search key : ");
    scanf("%d",&key);
    s=1;
    e=n;
    m=(s+e)/2;
    while(s<=e)
    {
        if(key<a[m])
        {
            e=m-1;
        }
        else{
            s=m+1;
        }
        m=(s+e)/2;
        if(key==a[m])
        {
            l=m;
            printf("location is %d ",l);
            break;
        }
    }
    if(l==0)
    {
        printf("item is not found.");
    }


}
