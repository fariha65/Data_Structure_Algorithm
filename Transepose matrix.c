///C program to transpose a matrix
#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    printf("\nEnter row:");
    scanf("%d",&r);
    printf("\nEnter columb:");
    scanf("%d",&c);
    printf("Enter your matrix: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Index [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");

    }
    printf("print matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");

    }

     printf("print transepose matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);

        }
        printf("\n");

    }
}
