#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main(int argc, char *argv[]) {
	char str[50];

	printf("�п�J�@�Ӧr��: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0'; 

	reverse(str);

	printf("�����N���~��...");
	getchar(); 

	return 0;
}

void reverse(char str[]) {
	int length = strlen(str);
	printf("�ഫ�᪺�r��: ");

	for (int j = length - 1; j >= 0; j--) {
		printf("%c", str[j]);
	}

	printf("\n");
}
