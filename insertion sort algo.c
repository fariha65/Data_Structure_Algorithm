#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("\nEnter %d element:",n);
    for(i=0;i<n;i++)
    {
        printf("\nindex [%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
     printf("\nBefore sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");

   for(i=0;i<n;i++)
   {
       j=i;

       while(j>0 && a[j-1]>a[j])
       {
           temp=a[j];
           a[j]=a[j-1];
           a[j-1]=temp;
           j--;
       }
   }

   printf("\nAfter sorting:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }

}
