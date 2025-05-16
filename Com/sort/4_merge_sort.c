#include <stdio.h>

// Function Merge
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays
    int leftArray[n1], rightArray[n2];

    // Copy data to temporary arrays leftArray[] and rightArray[]
    for (i = 0; i < n1; i++)
        leftArray[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        rightArray[j] = arr[middle + 1 + j];

    // Merge data from temporary arrays into arr[left..right]
    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // If more data ,Copy data into leftArray[] 
    while (i < n1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    // If more data ,Copy data into rightArray[]
    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

// Function Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Divide the array into 2 parts
        int middle = left + (right - left) / 2;

        // sort sun array
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Merge two data
        merge(arr, left, middle, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[256];
    int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
    printf("\nUnsorted array: ");
    printArray(arr, n);

    // Call Merge Sort
    mergeSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    printArray(arr, n);
    return 0;
}
