#include <stdio.h>

// ฟังก์ชันสำหรับ swap ค่าข้อมูล
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ฟังก์ชันที่ใช้ในการ partition array และ return ตำแหน่งของ Pivot
int partition(int arr[], int low, int high) {
    // เลือก Pivot เป็นตัวแรกของ array
    int pivot = arr[low];
    int i = low + 1;

    for (int j = low + 1; j <= high; j++) {
        // ถ้าข้อมูลปัจจุบันน้อยกว่าหรือเท่ากับ Pivot, swap กับ arr[i] และเพิ่ม i
        if (arr[j] <= pivot) {
            swap(&arr[j], &arr[i]);
            i++;
        }
    }

    // Swap Pivot with arr[i-1]
    swap(&arr[low], &arr[i - 1]);

    // Return index of Pivot
    return i - 1;
}

// Function Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition array and Pivot
        int pivotIndex = partition(arr, low, high);

        // Call Quick Sort for partitions left and right of Pivot
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
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

    // Call Quick Sort
    quickSort(arr, 0, n - 1);

    printf("\nSorted array: ");
    printArray(arr, n);
    return 0;
}
