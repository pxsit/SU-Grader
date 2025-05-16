#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n) {
    //write your code
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

 	// Call selection sort
    selectionSort(arr, n);

    printf("\nSorted array: ");
    printArray(arr, n);
    return 0;
}
