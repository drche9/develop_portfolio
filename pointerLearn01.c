//�迭�� �޸� ������ ����� �� ���� * ������
#include<stdio.h>
int main() {
	int array[3] = { 1,2,3 };
	
	//8,9,10��° �ٿ��� ���� ���� ��� �ȴ�. 
	printf("%x %x %x \n", &array[0], &array[1], &array[2]);
	printf("%x %x %x \n", *&array[0], *&array[1], *&array[2]);
	printf("%x %x %x \n", array[0], array[1], array[2]);
	printf("%x %x %x \n", *&*&array[0], *&*&array[1], *&*&array[2]);

	return 0;
}