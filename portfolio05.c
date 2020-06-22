//입력값에 맞게 마름모 출력
//level_up club portfolio_05

#include<stdio.h>
#include<stdlib.h>
int main() {
	int num = 0;
	int lineCount = 0;
	int starCount = 0;
	int spaceCount = 0;
	printf("input ==> ");
	scanf_s("%d",&num);
	for (lineCount = 0; lineCount < num; lineCount++) {
		for (spaceCount = num - (lineCount + 1); spaceCount > 0; spaceCount--) {
			printf(" ");
		}
		for (starCount = lineCount * 2 + 1; starCount > 0; starCount--) {
			printf("*");
		}
		printf("\n");
	}
	for (lineCount = 1; lineCount < num; lineCount ++) {
		for (spaceCount = 0; spaceCount < lineCount; spaceCount++) {
			printf(" ");
		}
		for (starCount = (num * 2) - (lineCount * 2 + 1); starCount > 0;starCount--) {
			printf("*");
		}
		printf("\n");
	}

}

//역 피라미드
//5 5 5 5 5 num
//0 1 2 3 4 line
//0 1 2 3 4 space


//5 5 5 5 5 num
//0 1 2 3 4 line 
//10 10 10 10 10 num * 2
//1 3 5 7 9 star * 2 + 1
//9 7 5 3 1 star

//피라미드
//spaceCount
//5 5 5 5 5 num
//4 3 2 1 0 spaceCount
//0 1 2 3 4 lineCount
//1 2 3 4 5 num - spaceCount + 1

//starCount
//10 10 10 10 10 num * 2
//5 5 5 5 5 num
//0 1 2 3 4 line
//1 3 5 7 9 star
//0 2 4 6 8 line * 2