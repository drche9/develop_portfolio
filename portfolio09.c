//�Լ� ���� - 01
#include<stdio.h>
	//���� ��
	int mas(int a, int b) {
		if (a > b)
			return a;
		else
			return b;

	}

	int main(void) {
		int i, j;
		int k;
		printf("���� �ΰ��� �Է��ϼ��� : ");
		scanf_s("%d %d", &i, &j);
	
		k = mas(i, j);
		printf("%d�� %d �� ū ���� %d �Դϴ�.", i, j, mas);
	
		return 0;
	}	