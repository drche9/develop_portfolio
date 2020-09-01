#include<stdio.h>
int main() {
	//array[0]과 *(array + 0)과 *array는 같은 주소값을 출력한다.
	/*int array[2][2] = { 10,20,30,40 };
	printf("%x %x %x\n", array[0],*(array + 0),*array);
	printf("%x %x\n", array[1], *(array + 1));
	return 0;*/

	//연산자의 우선순위 해결
	int array[1][2] = { 10,20 };
	
	printf("%d %d", *array[0]+ 0, *array[0] + 1);
	printf("%d %d", **(array + 0) + 0, **(array + 1) + 0);

	return 0;
}