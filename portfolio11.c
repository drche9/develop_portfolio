#include<stdio.h>
int sum(void);
int input();
void output(int x);

//�Լ��� �ٸ� �Լ�������  ȣ�� �� �� �ִ�.
int main(void) {
	int result;
	printf("----���α׷� ����----");
	printf("���� �� ���� �Է��ϼ��� : ");
	
	result = sum();
	output(result);

	return 0;
}

int sum() {
	int i = 0;
	int total = 0;
	int num = 0;
	num = input();

	for (i = 1; i <= num; i++) {
		total = total + 1;
	}
	return total;
}

int input(){
	int val;
	scanf_s("%d", &val);
	return val;
}

void output(int x) {
	printf("��� : %d \n", x);
	return;
}