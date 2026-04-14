#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

// Function to sort array (simple bubble sort)
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {45, 12, 89, 7, 33, 21, 56};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 33;

    // Sort the array
    sortArray(numbers, size);

    // Print sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Perform binary search
    int resultIndex = binarySearch(numbers, size, target);

    if (resultIndex != -1) {
        printf("Element %d found at index: %d\n", target, resultIndex);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}
