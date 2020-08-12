#include<stdio.h>
//함수
//입력값, 식, 반환값
void Plus() {
	int num1;
	int num2;
	printf("input two number => ");
	scanf_s("%d %d",&num1,&num2);
	printf("%d + %d = %d",num1,num2,num1+num2);
}
int main() {
	Plus();
	return 0;
}