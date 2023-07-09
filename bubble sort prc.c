#include<stdio.h>
int main()
{
    int size,arr[100],i,j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter %d values:",size);
    for(i=0;i<size;i++)

    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Display before sorting array: ");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]); // {2,1,4,3,5,7,6}
    }
    printf("\n");
    for(i=0;i<size-1;i++)      // i=0;i<6;
        for(j=0;j<size-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
        }

    }
     printf("Display After sorting array:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]); // {2,1,4,3,5,7,6}
    }

}
