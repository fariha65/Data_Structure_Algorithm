#include<stdio.h>
int main()
{
    int i,j,a[100],n,t=0,temp;
    printf("enter array size: ");
    scanf("%d",&n);
    printf("\nEnter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        printf("\nindex [%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("\nBefore sorting array:\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");

    for (i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }

    }
    printf("after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);

    }

}
