#include<stdio.h>
int multiplication(int frountNumber, int backNumber) {
	if (frountNumber <= 9) {
		if (backNumber == 1) {
			printf("%d´Ü\n", frountNumber);
		}
		printf("%d * %d = %d \n", frountNumber, backNumber, frountNumber*backNumber);
		if (backNumber < 9) {
			multiplication(frountNumber, backNumber + 1);
		}
		else {
			return multiplication(frountNumber + 1, 1);
		}
	}
}

int main() {
	int frontNumber = 2, backNumber = 1;
	multiplication(frontNumber,backNumber);
	return 0;
}