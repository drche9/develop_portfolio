//노래의 번호를 입력하면 노래방 번호가 나오는 코드
#include<stdio.h>
#include<stdlib.h>

void number() {
	printf("0. <봄날은 간다> - 김윤아 \n1. <나무> - 카더가든\n2. <기억을 걷는 시간> - 넬\n");
	printf("3. <서른 즈음에> - 김광석 \n4. <피아노 도둑> - amazarashi\n5. <구애> - 선우정아\n");
	printf("6. <취중진담> - 전람회 \n7. <오르막길> - 윤종신\n8. <얼음들> - 악동뮤지션\n");
	printf("9. <무릎> - 아이유 \n10. <눈사람> - 정승환 \n11. <서시> - 신성우\n\n");
}

int system(int a) {
	scanf_s("%d", &a);
	switch (a) {
	case 0:
		printf("\n봄날은 간다 >> 5838");
		break;

	case 1:
		printf("\n나무 >> 53835");
		break;

	case 2:
		printf("\n기억을 걷는 시간 >> 19390");
		break;

	case 3:
		printf("\n서른 즈음에 >> 62041");
		break;

	case 4:
		printf("\n피아노 도둑 >> 28954");
		break;

	case 5:
		printf("\n구애 >> 49934");
		break;

	case 6:
		printf("\n취중진담 >> 62039");
		break;

	case 7:
		printf("\n오르막길 >> 35435");
		break;

	case 8:
		printf("\n얼음들 >> 38316");
		break;

	case 9:
		printf("\n무릎 >> 45524");
		break;

	case 10:
		printf("\n눈사람 >> 97309");
		break;

	case 11:
		printf("\n서시 >> 2135");
		break;
		return a;
	}
}


int main() {
	number();
	system(0);
	return 0;
}

