//����Լ���?
//�ڱ��ڽ��� ȣ���ϴ� �Լ��̴�

#include<stdio.h>

void self_service();

int main() {
	self_service();
	return 0;
}
void self_service() {
	static int i = 1;
	//���� ���� : �ѹ��� �ʱ�ȭ ���ش�

	if (i > 5)
		return;

	printf("���� ���� %d \n",i);
	i = 1 + i;
	self_service();
}
