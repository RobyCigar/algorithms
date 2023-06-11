#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partitioning the array on the basis of the pivot element
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choosing the last element as the pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than or equal to the pivot
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Recursive function to perform QuickSort
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        // Partitioning index
        int pivotIndex = partition(arr, low, high);

        // Recursively sort elements before and after the partition index
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, size);

    quickSort(arr, 0, size - 1);
    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}