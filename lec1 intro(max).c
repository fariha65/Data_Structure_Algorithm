#include<stdio.h>
 int main()
{
    int arr[100],max,n,l,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("\nEnter %d elements of array:",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=1;
    max=arr[1];
    for(i=1;i<n;i++)
    if (max<arr[i])
    {
        max=arr[i];
        l=i;
    }
    printf("Largest element is %d \nwhich is alocated in %d position. ",max,l);
}
