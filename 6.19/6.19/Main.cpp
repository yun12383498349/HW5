#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000
#define SIDES 6

int main() {
	int dice1, dice2, sum;
	int results[2 * SIDES + 1] = { 0 };  

	srand(time(NULL)); 

	for (int i = 0; i < ROLLS; ++i) {
		dice1 = 1 + rand() % SIDES;
		dice2 = 1 + rand() % SIDES;
		sum = dice1 + dice2;
		++results[sum];  
	}

	printf("%-10s%-10s%-15s\n", "點數", "次數", "百分比");
	for (int i = 2; i <= 2 * SIDES; ++i) {
		printf("%-10d%-10d%-15.2f%%\n", i, results[i], (double)results[i] / ROLLS * 100);
	}

	int expectedFrequency = ROLLS / 6;  
	int actualFrequency = results[7];

	if (actualFrequency >= expectedFrequency - 100 && actualFrequency <= expectedFrequency + 100) {
		printf("\n結果合理。\n");
	}
	else {
		printf("\n結果不合理。\n");
	}

	return 0;
}
