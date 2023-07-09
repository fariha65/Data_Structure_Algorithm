#include<stdio.h>
void swap(int arr[], int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<j)
            swap(arr,i,j);
    }
    swap(arr,low,j);
    return j;

}
void quicksort(int arr[],int low,int high){
if(low<high)
    {
        int setpivot=partition(arr,low,high);
        quicksort(arr,low,setpivot -1);
        quicksort(arr,setpivot +1 ,high);
    }
}
void printarray(int arr[],int size){
for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
}
        printf ("\n");

}

int main()
{
    int size;
    printf("Enter  size of array:");
    scanf("%d",&size);
    int arr[size];
    printf ("Enter the element:");
    for(int i=0;i<size;i++)
     scanf("%d",&arr[i]);

    printf("Original array: ");
    printarray(arr, size);

    quicksort(arr, 0, size - 1);

    printf("Sorted array: ");
    printarray(arr, size);

    return 0;
}




