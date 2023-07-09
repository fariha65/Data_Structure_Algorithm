///This program will read a matrix and prints sum and product of all elements of the two dimensional array.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c;
    int sum=0;
    int product=1;
    printf("Emter a row :");
    scanf("%d",&r);
    printf("\nEmter a columb: ");
    scanf("%d",&c);

    printf("\nEnter your 2d array:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nindex : [%d] [%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

     printf("\ndisplay your 2d array:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

            sum=sum+a[i][j];
            product=product*a[i][j];


        }
    }
    printf("\nsum is %d\nproduct is %d",sum,product);

}
