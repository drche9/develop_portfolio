#include<stdio.h>

int Fiboniacci(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else {
		return Fibonacci(n - 2) + Fibonacci(n - 1);
	}
}

int main() {
	for (int i = 0; i < 8; i++) {
		printf("%d \n", Fibonacci(i));
	}

	return 0;
}