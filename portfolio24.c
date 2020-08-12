#include<stdio.h>
int main() {
	int arrA[7] = { 1,2,3 };
	//초기화 - 숫자를 넣지않은 부분에 자동으로 0이 들어감
	int arrB[7];
	//배열 선언

	arrB[0] = 1;
	arrB[1] = 2;
	arrB[2] = 3;
	//각각의 데이터칸에 넣어서 0,1,2만 초기화
	for (int i = 0; i < 7; i++)
		printf("%d\n", arrA[i]);
	printf("===========\n");
	for (int i = 0; i < 7; i++) {
		printf("%d\n", arrB[i]);
	}
	return 0;
}