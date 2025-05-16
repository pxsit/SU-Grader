#include <stdio.h>

int linearSearch(int arr[], int n, int key) {

	for (int i = 0; i < n; i++) {
		if(arr[i] == key)
			return i;
	}
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
    find = linearSearch(arr, n, key);
    if (find== -1) 
    	printf("Not Found!");
    else 
    	printf("%d",find);
    return 0;
}
