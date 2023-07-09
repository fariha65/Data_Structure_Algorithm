///C program to find sum and subtraction of two matrices
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10],sub[10][10],i,j,r,c,r1,c1;
    printf("Enter a matrix row number: ");
    scanf("%d",&r);
    printf("\nEnter a matrix column number: ");
    scanf("%d",&c);
    printf("\nEnter b matrix row number: ");
    scanf("%d",&r1);
    printf("\nEnter a matrix column number: ");
    scanf("%d",&c1);

    printf("\nEnter a Matrix elements :");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
        printf("index [%d][%d] :",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    printf("\nEnter b Matrix elements :");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++){
        printf("index [%d][%d] :",i,j);
        scanf("%d",&b[i][j]);
        }
    }
    printf("\n");


    //printf("\nEnter a Matrix elements :");
    if(r==r1&&c==c1){
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){

        sum[i][j]=a[i][j]+b[i][j];
        sub[i][j]=a[i][j]-b[i][j];
        }
    }
    printf("\n");
    printf("\nEnter sum Matrix elements :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++){
        printf("%d ",sum[i][j]);

        }
         printf("\n");

    }
    printf("\n");

    printf("\nEnter sub Matrix elements :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++){
        printf("%d ",sub[i][j]);


        }
         printf("\n");

    }
    printf("\n");





}
}
