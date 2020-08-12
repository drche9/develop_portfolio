#include<stdio.h>
int Plus(int x, int y) {
	return x + y;
}
int Minus(int x, int y) {
	return x - y;
}
int Multiplication(int x, int y) {
	return x * y;
}
int Value(int x, int y) {
	return x / y;
}
int remainder(int x, int y) {
	return x % y;
}

int main() {
	int num1 = 0;
	int num2 = 0;
	printf("input two number => ");
	scanf_s("%d %d", &num1, &num2);
	Plus(num1, num2);
	printf("%d + %d = %d", num1, num2, Plus);
	Minus(num1, num2);
	Multiplication(num1, num2);
	Value(num1, num2);
	remainder(num1, num2);
	
	return;
}