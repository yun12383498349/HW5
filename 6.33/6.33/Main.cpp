#include <stdio.h>
#include <stdlib.h>

int binarySearch(const int array[], int low, int high, int key);

int main() {
	int size;

	printf("請輸入陣列大小: ");
	scanf("%d", &size);

	int *a = (int *)malloc(size * sizeof(int));

	printf("請輸入%d個遞增排序的整數:\n", size);
	for (int i = 0; i < size; ++i) {
		scanf("%d", &a[i]);
	}

	int searchKey, element;

	printf("請輸入整數搜尋關鍵字: ");
	scanf("%d", &searchKey);

	element = binarySearch(a, 0, size - 1, searchKey);

	if (element != -1) {
		printf("找到值在索引 %d\n", element);
	}
	else {
		printf("找不到值\n");
	}

	free(a);

	return 0;
}

int binarySearch(const int array[], int low, int high, int key) {

	if (low > high) {
		return -1;
	}

	int middle = (low + high) / 2;

	if (array[middle] == key) {
		return middle;
	}

	if (key < array[middle]) {
		return binarySearch(array, low, middle - 1, key);
	}
	else {
		return binarySearch(array, middle + 1, high, key);
	}
}
