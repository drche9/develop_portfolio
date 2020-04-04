//함수 - 계산기
//level_up club portfolio_01
//calculator
//todo : 메인 안에 있는 식 함수 안으로 옮기기

#include<stdio.h>
#include<stdlib.h>
int plus(int a, int b) {
	printf("plus ==> ");
	scanf_s("%d %d", &a, &b);
	return a + b;
}
int minus(int a,int b) {
	printf("minus ==> ");
	scanf_s("%d %d", &a, &b);
	return a - b;
}
int division(int a,int b) {
	printf("division ==> ");
	scanf_s("%d %d", &a, &b);
	return a / b;
}
int multiply(int a, int b) {
	printf("multiply ==> ");
	scanf_s("%d %d", &a, &b);
	return a * b;
}
int Remainder(int a, int b) {
	printf("Remainder ==> ");
	scanf_s("%d %d", &a, &b);
	return a % b;
}
int main() {
	int total = 0;
	int a = 0;
	int b = 0;
	int result = 0;
	printf("\"calculator\"\n");
	printf("0.plus\n1.minus\n2.division\n3.multiply\n4.Remainder\n");
	scanf_s("%d", &result);
	if (result == 0) {
		total = plus(a, b);
		printf("total = %d", total);
	}
	else if (result == 1) {
		total = minus(a, b);
		printf("total = %d", total);
	}
	else if (result == 2) {
		total = division(a, b);
		printf("total = %d", total);
	}
	else if (result == 3) {
		total = multiply(a, b);
		printf("total = %d", total);
	}
	else if (result == 4) {
		total = Remainder(a, b);
		printf("total = %d", total);
	}
	return 0;

}