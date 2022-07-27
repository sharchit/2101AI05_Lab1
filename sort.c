#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertionSort(int array[], int size) {
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        while (key < array[j] && j >= 0) {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

// Driver code
int main() 
{
    int n;
    printf("Enter the number of element in array: ");
    scanf("%d", &n);
    int* arr = malloc(sizeof(int) * n);
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("The array before sorting is: ");
    printArray(arr, n);
    
    int key;
    printf("\nChose the key for sorting technique- \n");
    printf("1 for Insertion Sort\n");
    printf("2 for Selection Sort\n");
    printf("3 for Bubble Sort\n");
    printf("4 for Merge Sort\n");
    printf("5 for Quick Sort\n");
    printf("Enter your key: ");
    scanf("%d", &key);

    if(key == 1)
    {
        insertionSort(arr, n);
        printf("The array after Insertion sort is: ");
        printArray(arr, n);
    }
    else
    {
        printf("Invalid Command");
    }
}