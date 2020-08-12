//재귀함수란?
//자기자신을 호출하는 함수이다

#include<stdio.h>

void self_service();

int main() {
	self_service();
	return 0;
}
void self_service() {
	static int i = 1;
	//정적 변수 : 한번만 초기화 해준다

	if (i > 5)
		return;

	printf("셀프 서비스 %d \n",i);
	i = 1 + i;
	self_service();
}
