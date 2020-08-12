#include<stdio.h>

int RecursiveFunction(int a) {
	printf("%d\n", a);
	if (a != 1) {
		return RecursiveFunction(a - 1);
	}
}

int main() {
	RecursiveFunction(5);
}