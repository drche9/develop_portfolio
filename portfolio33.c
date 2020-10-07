#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define X 9
#define Y 5

time_t start, end;

int mapView[Y][X] = {
	{0,0,0,0,0,0, },
	{0,0,0,0,0,0, },
	{1,1,1,0,0,0, },
	{1,1,1,0,0,0, },
	{1,1,1,0,0,0, },
};

int gotoXY(int x, int y) {
	//x = 0.5 이기 때문에 0.5 * 2 = 1
	COORD pos = { x * 2 ,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorManager(char show)/*커서숨기기*/{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

int mapManager() {

	// TODO : 스코어와 시간 밑에 Map이 뜨게 하기
	mapView[Y][X] = 2;
	gotoXY(10, 10);
	while (1) {
		for (int i = 0; i < Y; i++) {
			for (int j = 0; j < X; j++) {
				switch (mapView[i][j]) {
				case 0: printf(" ");
					break;
				case 1: printf("□");
					break;
				case 2: printf("■");
				}
			}
			printf("\n");
		}
		system("CLS");
	}
}

int node() {
	//노드 생성 조건 mapView 배열 [2][i],[3][i],[4][i] 1에만 생성
	//□을 ■으로 교체 배열에 + 1
	//mapView[2][0] += 1;

}

int render() {
	start = clock();
	mapManager();
	//화면 지우기
	system("CLS");
	//플레이 시간, 스코어
	int result = (double)(start);
	printf("플레이 시간 : %d초		", result / 1000);
	printf("스코어 : %d점\n\n\n\n", 1223);
	printf("\n\n\n");


	return 0;
}

int main() {
	srand((unsigned int)time(NULL));
	while (1){
		start = clock();
		render();
		CursorManager(0);
		//mapManager();
	}
	end = clock();
}