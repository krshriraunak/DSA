#include <stdio.h>

// Function to merge two sorted halves
void merge(int arr[], int left, int mid, int right) {
    int temp[right - left + 1];

    int i = left;
    int j = mid + 1;
    int k = 0;

    // Merge the two halves
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        } else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left half
    while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements of right half
    while (j <= right) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy back to original array
    for (int p = 0; p < k; p++) {
        arr[left + p] = temp[p];
    }
}

// Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

// Function to print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {11, 25, 154, 184, 220, 12, 2, 24};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting:\n");
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    printf("After sorting:\n");
    printArray(arr, n);

    return 0;
}
