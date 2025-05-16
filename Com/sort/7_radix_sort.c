#include <stdio.h>

// ฟังก์ชันในการทำ Radix Sort โดยให้ exp เป็น 10^i
void countSort(int arr[], int n, int exp) {
    const int RADIX = 10;
    int* output = (int*)malloc(n * sizeof(int));  // ใช้ malloc เพื่อสร้าง array ขนาด n

    // ตรวจสอบว่าการ allocate memory สำเร็จหรือไม่
    if (output == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    int* count = (int*)calloc(RADIX, sizeof(int));  // ใช้ calloc เพื่อกำหนดค่าเริ่มต้นเป็น 0

    // นับจำนวนของตัวเลขที่ปรากฏในตำแหน่งที่กำหนดโดย exp
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % RADIX]++;
    }

    // ทำให้ count[i] เก็บค่าที่เป็น running sum
    for (int i = 1; i < RADIX; i++) {
        count[i] += count[i - 1];
    }

    // สร้าง output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % RADIX] - 1] = arr[i];
        count[(arr[i] / exp) % RADIX]--;
    }

    // Copy output array เข้าไปใน arr[]
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    // คืนทรัพยากรที่ถูก allocate
    free(output);
    free(count);
}

// ฟังก์ชัน Radix Sort
void radixSort(int arr[], int n) {
    // หาค่าที่มากที่สุดเพื่อทราบจำนวน digit
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // ทำ Radix Sort สำหรับแต่ละ digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(arr, n, exp);
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

    // เรียกใช้ Radix Sort
    radixSort(arr, n);

    printf("\nSorted array: ");
    printArray(arr, n);
    return 0;
}
