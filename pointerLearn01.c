//배열의 메모리 공간에 저장된 값 참조 * 연산자
#include<stdio.h>
int main() {
	int array[3] = { 1,2,3 };
	
	//8,9,10번째 줄에선 같은 값이 출력 된다. 
	printf("%x %x %x \n", &array[0], &array[1], &array[2]);
	printf("%x %x %x \n", *&array[0], *&array[1], *&array[2]);
	printf("%x %x %x \n", array[0], array[1], array[2]);
	printf("%x %x %x \n", *&*&array[0], *&*&array[1], *&*&array[2]);

	return 0;
}