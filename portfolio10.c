//�Լ� �⺻ - 02	
#include<stdio.h>
double divide(double x, double y);
double input(void);
void output(double x);
void information(void);

//�Ǽ� ������

	int main(void) {
		double num1, num2, result;

		information();
		printf("ù��° �Ǽ� �Է� : ");
		num1 = input();

		printf("�ι�° �Ǽ� �Է� : ");
		num2 = input();

		result = divide(num1, num2);
		output(result);

		return 0;
	}
	double divide(double x, double y) {
		double val;
		val = x / y;
		return val;
	}
	double input(void) {
		double val;
		scanf("%lf", &val);
		return val;
	}
	void output(double x) {
		printf("������ ��� : &lf \n", x);
		return;
	}
	void information(void) {
		printf("---- ���α׷� ���� ----");
		return;
	}