//�뷡�� ��ȣ�� �Է��ϸ� �뷡�� ��ȣ�� ������ �ڵ�
#include<stdio.h>
#include<stdlib.h>

void number() {
	printf("0. <������ ����> - ������ \n1. <����> - ī������\n2. <����� �ȴ� �ð�> - ��\n");
	printf("3. <���� ������> - �豤�� \n4. <�ǾƳ� ����> - amazarashi\n5. <����> - ��������\n");
	printf("6. <��������> - ����ȸ \n7. <��������> - ������\n8. <������> - �ǵ�������\n");
	printf("9. <����> - ������ \n10. <�����> - ����ȯ \n11. <����> - �ż���\n\n");
}

int system(int a) {
	scanf_s("%d", &a);
	switch (a) {
	case 0:
		printf("\n������ ���� >> 5838");
		break;

	case 1:
		printf("\n���� >> 53835");
		break;

	case 2:
		printf("\n����� �ȴ� �ð� >> 19390");
		break;

	case 3:
		printf("\n���� ������ >> 62041");
		break;

	case 4:
		printf("\n�ǾƳ� ���� >> 28954");
		break;

	case 5:
		printf("\n���� >> 49934");
		break;

	case 6:
		printf("\n�������� >> 62039");
		break;

	case 7:
		printf("\n�������� >> 35435");
		break;

	case 8:
		printf("\n������ >> 38316");
		break;

	case 9:
		printf("\n���� >> 45524");
		break;

	case 10:
		printf("\n����� >> 97309");
		break;

	case 11:
		printf("\n���� >> 2135");
		break;
		return a;
	}
}


int main() {
	number();
	system(0);
	return 0;
}

