//함수 기초 - 01
#include<stdio.h>
	//숫자 비교
	int mas(int a, int b) {
		if (a > b)
			return a;
		else
			return b;

	}

	int main(void) {
		int i, j;
		int k;
		printf("숫자 두개를 입력하세요 : ");
		scanf_s("%d %d", &i, &j);
	
		k = mas(i, j);
		printf("%d와 %d 중 큰 수는 %d 입니다.", i, j, mas);
	
		return 0;
	}	