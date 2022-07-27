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

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
        if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void merge(int arr[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        } 
        else 
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

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
    else if(key == 2)
    {
        selectionSort(arr, n);
        printf("The array after Selection sort is: ");
        printArray(arr, n);
    }
    else if(key == 3)
    {
        bubbleSort(arr, n);
        printf("The array after Bubble sort is: ");
        printArray(arr, n);
    }
    else if(key == 4)
    {
        mergeSort(arr, 0, n - 1);
        printf("The array after Merge sort is: ");
        printArray(arr, n);
    }
    else
    {
        printf("Invalid Command");
    }
}