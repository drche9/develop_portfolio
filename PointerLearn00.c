//배열의 주소값 참조 & 연산자
#include<stdio.h>
int main() {
	int array1[3] = { 1,2,3 };
	char array2[3] = { 'A', 'B','C' };
	printf("%x %x %x \n", &array1[0], &array1[1], &array1[2]); //== array1 + 0, array1 + 1, array1 +2
	printf("%x %x %x \n", &array2[0], &array2[1], &array2[2]);
	return 0;

}