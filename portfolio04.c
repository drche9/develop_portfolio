//입력값에 맞게 피라미드에 숫자 출력
//level_up club portfolio_04
//보류

#include<stdio.h>
#include<stdlib.h>
int main() {
	int spaceCount = 0;
	int repeatCount = 0;
	int lineCount = 0;
	int frontNumber = 0;
	int backNumber = 0;
	printf("input => ");
	scanf_s("%d",&repeatCount);
	for (lineCount; lineCount < repeatCount; lineCount++) {
		for (spaceCount = repeatCount - (lineCount + 1); spaceCount > 0; spaceCount--) {
			printf(" ");
		}
		for (frontNumber = 0; frontNumber <= lineCount; frontNumber++) {
			printf("%d",frontNumber + 1);
		}
		printf("\n");
	}
}

//3 3 3 num
//0 1 2 line
//2 1 0 space

//3 3 3 num
//0 1 2 line
//1 2 3 front
