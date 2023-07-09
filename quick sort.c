#include <stdio.h>

// Function to swap two elements
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Partitioning the array and returning the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Choosing the first element as the pivot
    int i = low;
    int j = high;

    while (i < j) {
        // Move the left pointer to the right until an element greater than pivot is found
        while (arr[i] <= pivot && i < high)
            i++;

        // Move the right pointer to the left until an element less than or equal to pivot is found
        while (arr[j] > pivot)
            j--;

        // Swap the elements at i and j if they are not crossed
        if (i < j)
            swap(arr, i, j);
    }

    // Swap the pivot element with the element at index j
    swap(arr, low, j);

    return j;
}

// The main Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the sub-arrays
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
