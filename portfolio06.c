//������ �غ�
//�̸� ���� Ű �� �Է� �ް� ���
//level_up club portfolio_05

#include<stdio.h>
#include<stdlib.h>
int main() {
	char name[10] = "";
	int age = 0;
	int cm = 0;
	char gender[8] = "";	
	printf("\n�̸��� �Է��� �ּ��� : ");
	scanf_s("%s", &name,sizeof(name));
	printf("\n���̸� �Է��� �ּ��� : ");
	scanf_s("%d", &age);
	printf("\nŰ�� �Է��� �ּ��� : ");
	scanf_s("%d", &cm);
	printf("\n������ �Է��� �ּ��� : ");
	scanf_s("%s", &gender,sizeof(gender));
	printf("\n\n�̸� : %s\n",name);
	printf("���� : %d\n", age);
	printf("Ű : %d\n",cm);
	printf("���� : %s\n", gender);

	return 0;
}