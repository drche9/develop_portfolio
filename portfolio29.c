#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

int TopMapRule = 3;
int bottomMap = 3;

//�̵��� ��ġ
void gotoPos() {
	gotoXY(8, 8);
}

void selectPos();

//��ǥ�� �߰�
int gotoXY(int x, int y) {
	//x = 0.5 �̱� ������ 0.5 * 2 = 1
	COORD pos = { x * 2 ,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//������ ��
int GameMap() {
	gotoXY(0, 0);
	//�� ���κ�
	for (int x = 3; x > 0; x--) {
		if (TopMapRule == 3) {
			printf("��");
			TopMapRule--;
		}
		else if (TopMapRule == 2) {
			for (int i = 15; i > 0; i--) {
				printf("��");
			}
			TopMapRule--;
		}
		else{
			if (TopMapRule == 1) {
				printf("��\n");
				TopMapRule--;
			}
		}
	}
	//�� ��� �ݺ� ����
	for (int MidMapRule = 14; MidMapRule > 0; MidMapRule--) {
		printf("����������������������������������\n");
	}

	//�� �Ʒ� �κ�
	for (int y = 3; y > 0; y--) {
		if (bottomMap == 3) {
			printf("��");
			bottomMap--;
		}
		else if (bottomMap == 2) {
			for (int i = 15; i > 0; i--) {
				printf("��");
			}
			bottomMap--;
		}
		else {
			if (bottomMap == 1) {
				printf("��\n\n");
				bottomMap--;
			}
		}
	}
	printf("W : ���� (��)\nA : �������� (��)\nD : ���������� (��)\nS : �Ʒ��� (��)\n\n");
	void gotoCoordinate();
}

void InputKey(char key) {
	switch (key) {
	case 'A':
	case 'a':

		break;

	case 'W':
	case 'w':
		break;

	case 'D':
	case 'd':
		break;

	case 'S':
	case 's':
		break;
	
	}
}

int main() {
	//*** �ؿ� ������ �ϴ� ���� �����ϱ� ***
	//Ŀ���� ������
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.bVisible = 0;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	GameMap();
}