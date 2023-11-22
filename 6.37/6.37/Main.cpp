#include <stdio.h>
#include <stdlib.h>

// 函式原型
int recursiveMaximum(const int array[], int size);

int main() {
	int size;

	// 輸入陣列的大小
	printf("請輸入陣列大小: ");
	scanf("%d", &size);

	// 使用動態記憶體分配來創建陣列
	int *myArray = (int *)malloc(size * sizeof(int));

	// 輸入陣列元素
	printf("請輸入%d個整數:\n", size);
	for (int i = 0; i < size; ++i) {
		scanf("%d", &myArray[i]);
	}

	// 尋找最大值
	int max = recursiveMaximum(myArray, size);

	// 顯示結果
	printf("陣列中的最大值為：%d\n", max);

	// 釋放動態分配的記憶體
	free(myArray);

	return 0;
}

// 遞迴函數，尋找陣列中的最大值
int recursiveMaximum(const int array[], int size) {
	// 基本情況：當陣列僅有一個元素時停止
	if (size == 1) {
		return array[0];
	}

	// 遞迴情況：在陣列的其餘部分中尋找最大值
	int maxInRest = recursiveMaximum(array + 1, size - 1);

	// 將陣列的其餘部分的最大值與當前元素進行比較
	return (array[0] > maxInRest) ? array[0] : maxInRest;
}
