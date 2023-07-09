#include<stdio.h>
int main()
{

    int key, i, position = -1, size=5;
    int arr[5] = {11, 20, 50, 70, 130};
    printf("Array before deletion: ");

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Enter element to delete: ");
    scanf("%d",&key);
    // traverse the array

    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            position = i;
            break;
        }
    }
    if(position != -1)
    {
        //shift elements backwards by one position
        for(i = position; i < size - 1; i++)
            arr[i] = arr[i+1];
        printf("Array after deletion: ");
        for(i = 0; i < size - 1; i++)
            printf("%d ",arr[i]);
    }
    else
        printf("Element Not Found\n");
    return 0;
}
