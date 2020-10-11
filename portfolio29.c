#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>

int TopMapRule = 3;
int bottomMap = 3;

//이동할 위치
void gotoPos() {
	gotoXY(8, 8);
}

void selectPos();

//좌표계 추가
int gotoXY(int x, int y) {
	//x = 0.5 이기 때문에 0.5 * 2 = 1
	COORD pos = { x * 2 ,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//오목판 맵
int GameMap() {
	gotoXY(0, 0);
	//맵 윗부분
	for (int x = 3; x > 0; x--) {
		if (TopMapRule == 3) {
			printf("┌");
			TopMapRule--;
		}
		else if (TopMapRule == 2) {
			for (int i = 15; i > 0; i--) {
				printf("┬");
			}
			TopMapRule--;
		}
		else{
			if (TopMapRule == 1) {
				printf("┐\n");
				TopMapRule--;
			}
		}
	}
	//맵 가운데 반복 지점
	for (int MidMapRule = 14; MidMapRule > 0; MidMapRule--) {
		printf("├┼┼┼┼┼┼┼┼┼┼┼┼┼┼┼┤\n");
	}

	//맵 아래 부분
	for (int y = 3; y > 0; y--) {
		if (bottomMap == 3) {
			printf("└");
			bottomMap--;
		}
		else if (bottomMap == 2) {
			for (int i = 15; i > 0; i--) {
				printf("┴");
			}
			bottomMap--;
		}
		else {
			if (bottomMap == 1) {
				printf("┘\n\n");
				bottomMap--;
			}
		}
	}
	printf("W : 위로 (↑)\nA : 왼쪽으로 (←)\nD : 오른쪽으로 (→)\nS : 아래로 (↓)\n\n");
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
	//*** 밑에 네줄이 하는 일을 공부하기 ***
	//커서가 지워짐
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.bVisible = 0;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);

	GameMap();
}