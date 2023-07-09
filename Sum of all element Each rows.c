#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,sum=0;
    printf("Enter row :");
    scanf("%d",&r);
     printf("\nEnter columb :");
    scanf("%d",&c);
    printf("\nEnter 2d array :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nindex[%d] [%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];

        }
         printf ("\nsum of %d no rows: %d",i+1,sum);
         sum=0;

    }
}
