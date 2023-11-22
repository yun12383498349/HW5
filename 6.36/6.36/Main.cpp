#include <stdio.h>
#include <string.h>

void reverse(char str[]);

int main(int argc, char *argv[]) {
	char str[50];

	printf("請輸入一個字串: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0'; 

	reverse(str);

	printf("按任意鍵繼續...");
	getchar(); 

	return 0;
}

void reverse(char str[]) {
	int length = strlen(str);
	printf("轉換後的字串: ");

	for (int j = length - 1; j >= 0; j--) {
		printf("%c", str[j]);
	}

	printf("\n");
}
