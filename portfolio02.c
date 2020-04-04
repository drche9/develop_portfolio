//입력값에 맞게 피라미드 출력
//level_up club portfolio_02

#include<stdio.h>
#include<stdlib.h>
int main() {
	int lineCount = 0;
	int starCount = 0;
	int spaceCount = 0;
	int num = 0;
	printf("input ==>");
	scanf_s("%d", &num);
	printf("\n");
	for (lineCount; lineCount < num; lineCount++) {
		for (spaceCount = lineCount + 1; spaceCount < num; spaceCount++) {
			printf(" ");
		}
		for (starCount = lineCount * 2 + 1; starCount > 0;starCount--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

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



//피라미드
//    *
//   ***
//  *****
// *******
//*********