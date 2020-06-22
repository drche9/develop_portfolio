//입력값에 맞게 역 피라미드 출력
//level_up club portfolio_03

#include<stdio.h>
#include<stdlib.h>
int main() {
	int lineCount = 0;
	int spaceCount = 0;
	int starCount = 0;
	int num = 0;
	printf("input ==> ");
	scanf_s("%d", &num);
	for (lineCount; lineCount < num; lineCount++) {
		for (spaceCount = 0; spaceCount < lineCount; spaceCount++) {
			printf(" ");
		}
		for (starCount = (num * 2) - (lineCount * 2 + 1); starCount > 0; starCount--) {
			printf("*");
		}
		printf("\n");
	}
}

//5 5 5 5 5 num
//0 1 2 3 4 line
//0 1 2 3 4 space


//5 5 5 5 5 num
//0 1 2 3 4 line 
//10 10 10 10 10 num * 2
//1 3 5 7 9 star * 2 + 1
//9 7 5 3 1 star

//역 피라미드 출력
//*********
// *******
//  *****
//   ***
//    *