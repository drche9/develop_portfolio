#include<stdio.h>
int ascending(int codes[8]) {
	for (int i = 0; i < 8; i++) {
		if (codes[i] == codes[i] + 1) {
			return 1;
			printf("�Ϸ�");
		}
		else
			break;
			return 0;
	}
}

int descending() {

}

int main() {
	int codes[8];
	for (int i = 0; i < codes[8];i++) {
		scanf_s("%d", codes[i]);
		ascending(*&codes[i]);
	}
}

/*
�������� c d e f g a b C, �� 8�� ������ �̷�����ִ�. �� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�. c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.

1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 8���� 1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.

������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
ascending = ��������
desending = ��������

12345678

1 2 3 4 5 6 7 8
*/