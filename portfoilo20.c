#include<stdio.h>
int main() {
	int student[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	for (int i = 0; i < 20; i++) {
		printf("student%d = %d \n", i, student[i]);
	}
	return 0;
}