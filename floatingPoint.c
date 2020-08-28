//부동 소수점
#include<stdio.h>
int main() {
	if (0.1f == 0.1f * 0.1f) {
		printf("true");
	}
	else {
		printf("false");
	}
	return 0;
}
//소수는 2진수로 표현 할 수 없기 때문에 가장 근사치의 값으로 저장이 된다.
//그렇기 때문에 소수점 밑의 숫자가 무한대로 나온다.