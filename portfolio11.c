#include<stdio.h>
int sum(void);
int input();
void output(int x);

//함수를 다른 함수에서도  호출 할 수 있다.
int main(void) {
	int result;
	printf("----프로그램 시작----");
	printf("정수 한 개를 입력하세요 : ");
	
	result = sum();
	output(result);

	return 0;
}

int sum() {
	int i = 0;
	int total = 0;
	int num = 0;
	num = input();

	for (i = 1; i <= num; i++) {
		total = total + 1;
	}
	return total;
}

int input(){
	int val;
	scanf_s("%d", &val);
	return val;
}

void output(int x) {
	printf("결과 : %d \n", x);
	return;
}