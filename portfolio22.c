#include<stdio.h>
int main() {
	for (int frountNum = 1; frountNum <= 9; frountNum++) {
		printf("\n%d´Ü\n", frountNum);
		for (int backNum = 1; backNum <= 9; backNum++) {
			int result = frountNum * backNum;
			printf("%d * %d = %d\n", frountNum, backNum, result);
		}
	}
	return 0;
}