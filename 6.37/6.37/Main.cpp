#include <stdio.h>
#include <stdlib.h>

// �禡�쫬
int recursiveMaximum(const int array[], int size);

int main() {
	int size;

	// ��J�}�C���j�p
	printf("�п�J�}�C�j�p: ");
	scanf("%d", &size);

	// �ϥΰʺA�O������t�ӳЫذ}�C
	int *myArray = (int *)malloc(size * sizeof(int));

	// ��J�}�C����
	printf("�п�J%d�Ӿ��:\n", size);
	for (int i = 0; i < size; ++i) {
		scanf("%d", &myArray[i]);
	}

	// �M��̤j��
	int max = recursiveMaximum(myArray, size);

	// ��ܵ��G
	printf("�}�C�����̤j�Ȭ��G%d\n", max);

	// ����ʺA���t���O����
	free(myArray);

	return 0;
}

// ���j��ơA�M��}�C�����̤j��
int recursiveMaximum(const int array[], int size) {
	// �򥻱��p�G��}�C�Ȧ��@�Ӥ����ɰ���
	if (size == 1) {
		return array[0];
	}

	// ���j���p�G�b�}�C����l�������M��̤j��
	int maxInRest = recursiveMaximum(array + 1, size - 1);

	// �N�}�C����l�������̤j�ȻP��e�����i����
	return (array[0] > maxInRest) ? array[0] : maxInRest;
}
