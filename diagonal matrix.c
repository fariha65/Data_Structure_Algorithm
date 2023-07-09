///C program to read a matrix and print it's diagonals
#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    printf("Enter row:");
    scanf("%d",&r);
    printf("\nEnter columb:");
    scanf("%d",&c);
    printf("\nEnter your matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\n index [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

        if(r==c)
        {
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    if(i==j)
                    printf("%d ",a[j][i]);

                    else
                        printf("\t");
                }
                printf("\n");
            }
        }
            else{


                printf("it's not diagonal matrix.");}

    }


