///INSERTION
#include <stdio.h>
int main()
{
    int arr[100] ,i, insert, position, size;
    printf("Enter size of elements:");
scanf("%d",&size);
    printf("Enter %d elements: ",size);
    for (i = 0; i < size; i++)
        scanf("%d",&arr[i]);


    printf("Array before insertion: ");

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
   printf("\n");


    printf("Enter the element to be inserted: ");
    scanf("%d",&insert);


    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d",&position);


    size++;


    for (i = size-1; i >= position; i--)
        arr[i] = arr[i - 1];

    arr[position - 1] = insert;


    printf("Array after insertion: ");

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
