#include<stdio.h>
int main()
{
    int a[100],i,j,temp,n,key,l=0,s,e,m;
    printf("\nEnter array size : ");
    scanf("%d",&n);
    printf("\nEnter %d elements :",n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        j=i;
        while(j>1 && a[j]<a[j-1])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
     printf("\nAfter sorting :");
    for (i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("\nEnter search key :");
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
      else
      {
          s=m+1;
      }

      m=(s+e)/2;
      if(key==a[m])
      {
          l=m;
          printf("key is %d & location is %d.",a[m],l);
          break;
      }
    }


         if(l==0)
          printf("item isnot found.");
      }







