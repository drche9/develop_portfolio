#include<stdio.h>
int gugudan(int frountNumber,int backNumber){
	int result = 0;
	for (frountNumber; frountNumber <= 9; frountNumber++) {
		printf("\n%d´Ü\n", frountNumber);
		for (backNumber = 1; backNumber <= 9; backNumber++) {
			result = frountNumber * backNumber;
			printf("%d * %d = %d\n", frountNumber, backNumber, result);
		}
	}
	if (result == 81) {
		return 1;
	}
	gugudan(frountNumber, backNumber);
}
int main() {
	gugudan(1,1);
}