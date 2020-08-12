#include<stdio.h>
int main() {
	int student[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	printf("학생의 번호를 입력하시오 => ");
	int value = 0;
	scanf_s("%d", &value);
	switch (value) {
	case 1:
		printf("%d", student[0]);
		break;

	case 2:
		printf("%d", student[1]);
		break;

	case 3:
		printf("%d", student[2]);
		break;
	}
}