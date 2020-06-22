//슬럼프 극복
//이름 나이 키 성 입력 받고 출력
//level_up club portfolio_05

#include<stdio.h>
#include<stdlib.h>
int main() {
	char name[10] = "";
	int age = 0;
	int cm = 0;
	char gender[8] = "";	
	printf("\n이름을 입력해 주세요 : ");
	scanf_s("%s", &name,sizeof(name));
	printf("\n나이를 입력해 주세요 : ");
	scanf_s("%d", &age);
	printf("\n키를 입력해 주세요 : ");
	scanf_s("%d", &cm);
	printf("\n성별을 입력해 주세요 : ");
	scanf_s("%s", &gender,sizeof(gender));
	printf("\n\n이름 : %s\n",name);
	printf("나이 : %d\n", age);
	printf("키 : %d\n",cm);
	printf("성별 : %s\n", gender);

	return 0;
}