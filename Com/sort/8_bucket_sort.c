#include <stdio.h>
#include <stdlib.h>
// โครงสร้างข้อมูลสำหรับ bucket
struct Node {
    int data;
    struct Node* next;
};

// ฟังก์ชัน Insertion Sort สำหรับ bucket
void insertionSort(struct Node** bucket) {
    struct Node* sorted = NULL;
    struct Node* current = *bucket;
    while (current != NULL) {
        struct Node* next = current->next;
        if (sorted == NULL || sorted->data >= current->data) {
            current->next = sorted;
            sorted = current;
        } else {
            struct Node* temp = sorted;
            while (temp->next != NULL && temp->next->data < current->data) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next;
    }
    *bucket = sorted;
}

// ฟังก์ชัน Bucket Sort
void bucketSort(int arr[], int n) {
    const int numBuckets = 10; // จำนวน bucket
    struct Node* buckets[numBuckets];

    // สร้าง bucket
    for (int i = 0; i < numBuckets; i++) {
        buckets[i] = NULL;
    }

    // ใส่ข้อมูลลงใน bucket
    for (int i = 0; i < n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = arr[i];
        newNode->next = buckets[arr[i] / numBuckets];
        buckets[arr[i] / numBuckets] = newNode;
    }

    // เรียงลำดับในแต่ละ bucket ด้วย Insertion Sort
    for (int i = 0; i < numBuckets; i++) {
        insertionSort(&buckets[i]);
    }

    // นำข้อมูลที่เรียงลำดับกลับมาเป็น array ใหม่
    int index = 0;
    for (int i = 0; i < numBuckets; i++) {
        struct Node* current = buckets[i];
        while (current != NULL) {
            arr[index++] = current->data;
            current = current->next;
        }
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

    // เรียกใช้ Bucket Sort
    bucketSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}
