#include <stdio.h>

// ฟังก์ชันสลับค่าข้อมูล
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// ฟังก์ชัน Heapify เพื่อทำให้ subtree ที่ rtk เป็น Max Heap
void heapify(int arr[], int n, int i) {
    int largest = i;    // ตั้ง rtk ให้เป็น node ที่มีค่ามากที่สุด
    int left = 2 * i + 1;   // หา index ของ left child
    int right = 2 * i + 2;  // หา index ของ right child

    // เปรียบเทียบ left child กับ rtk
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // เปรียบเทียบ right child กับ rtk
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // ถ้า rtk ไม่ใช่ node ที่มีค่ามากที่สุด, ให้สลับ rtk กับ node ที่มีค่ามากที่สุด
    if (largest != i) {
        swap(&arr[i], &arr[largest]);

        // ทำ Heapify สำหรับ subtree ที่เปลี่ยนแปลง
        heapify(arr, n, largest);
    }
}

// ฟังก์ชัน Heap Sort
void heapSort(int arr[], int n) {
    // สร้าง Max Heap จาก array
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // สลับ rtk กับสุดท้ายของ array และลดขนาดของ Heap
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

// ฟังก์ชันแสดงข้อมูลใน array
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

    // เรียกใช้ Heap Sort
    heapSort(arr, n);

    printf("\nSorted array: ");
    printArray(arr, n);
    return 0;
}
