#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int numbers[] = {10, 30, 20, 40, 60, 50};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Sort the array using qsort
    qsort(numbers, n, sizeof(int), compare);

    // Print the sorted array
    printf("Sorted Array: [");
    for (int i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
