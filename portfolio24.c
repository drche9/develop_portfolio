#include<stdio.h>
int main() {
	int arrA[7] = { 1,2,3 };
	//�ʱ�ȭ - ���ڸ� �������� �κп� �ڵ����� 0�� ��
	int arrB[7];
	//�迭 ����

	arrB[0] = 1;
	arrB[1] = 2;
	arrB[2] = 3;
	//������ ������ĭ�� �־ 0,1,2�� �ʱ�ȭ
	for (int i = 0; i < 7; i++)
		printf("%d\n", arrA[i]);
	printf("===========\n");
	for (int i = 0; i < 7; i++) {
		printf("%d\n", arrB[i]);
	}
	return 0;
}