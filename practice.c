#include <stdio.h>
int main()

{
    int arr[100],i,n, key;
    printf("Enter the element of array: ");
    scanf("%d",&n);
    printf("Enter %d number of element :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Display array element:");
    for(i=0;i<n;i++)
    {
    printf(" %d",arr[i]);
    }
    printf("\nEnter a key value :");
    scanf("%d\n",&key);

    for (i=0;i<=n;i++)
        {
    if(arr[i]==key)
    {

        printf("\nvalue find in %d and number is %:d",i ,arr[i] );
        break;
    }
    if(i>n)
        printf("value is not found.");

    else
    {
        printf("value is not found\n");
    }
    }



}
