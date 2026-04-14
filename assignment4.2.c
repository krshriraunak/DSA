#include <stdio.h>

// Binary search function
int binarySearch(int arr[], int key, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid + 1;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

// Binary Insertion Sort function
void binaryInsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];

        // Find position using binary search
        int pos = binarySearch(arr, key, 0, i - 1);

        // Shift elements to make space
        int j = i - 1;
        while (j >= pos) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[pos] = key;
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int arr[] = {37, 23, 0, 17, 12, 72, 31};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, n);

    binaryInsertionSort(arr, n);

    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}
