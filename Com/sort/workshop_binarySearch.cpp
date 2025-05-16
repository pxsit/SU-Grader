#include <stdio.h>
#include<stdlib.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    //write your code
    for (int i = 0; i < n; i++) {
    	for (int j = 0; j < n-i-1; j++) {
    		if (arr[j] > arr[j+1]) 
    			swap(&arr[j],&arr[j+1]);
		}
	}
}

int binSearch(int arr[], int left, int right, int key) {
    while (left <= right) {

        // calculating mid point
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;
        }

        // If key greater than arr[mid], ignore left half
        if (arr[mid] < key) {
            left = mid + 1;
        }

        // If key is smaller than or equal to arr[mid],
        // ignore right half
        else {
            right = mid - 1;
        }
    }

    // If we reach here, then element was not present
    return -1;
}

int main() {
    int arr[100];
    int n, key, find;
	scanf("%d",&n);
	for(int i = 0; i < n; i++) {
		scanf("%d",&arr[i]);
	}
	scanf("%d",&key);
	bubbleSort(arr, n);
    find = binSearch(arr, 0, n-1, key);
    if (find== -1) 
    	printf("Not Found!");
    else 
    	printf("%d",find);
    return 0;
}
