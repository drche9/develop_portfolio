#include<stdio.h>
int main() {
	//array[0]�� *(array + 0)�� *array�� ���� �ּҰ��� ����Ѵ�.
	/*int array[2][2] = { 10,20,30,40 };
	printf("%x %x %x\n", array[0],*(array + 0),*array);
	printf("%x %x\n", array[1], *(array + 1));
	return 0;*/

	//�������� �켱���� �ذ�
	int array[1][2] = { 10,20 };
	
	printf("%d %d", *array[0]+ 0, *array[0] + 1);
	printf("%d %d", **(array + 0) + 0, **(array + 1) + 0);

	return 0;
}