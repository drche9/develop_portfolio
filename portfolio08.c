//�Լ� ���� - 00

#include<stdio.h>
	//���ϱ�
	int sum(int x,int y) {
		int result = 0;
		result = x + y;
		return result;
	}
	int main() {
		int answer = 0;
		answer = sum(3, 4);
		printf("%d \n",answer);
		return 0;
	}
