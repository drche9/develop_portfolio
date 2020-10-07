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
	//x = 0.5 �̱� ������ 0.5 * 2 = 1
	COORD pos = { x * 2 ,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void CursorManager(char show)/*Ŀ�������*/{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

int mapManager() {

	// TODO : ���ھ�� �ð� �ؿ� Map�� �߰� �ϱ�
	mapView[Y][X] = 2;
	gotoXY(10, 10);
	while (1) {
		for (int i = 0; i < Y; i++) {
			for (int j = 0; j < X; j++) {
				switch (mapView[i][j]) {
				case 0: printf(" ");
					break;
				case 1: printf("��");
					break;
				case 2: printf("��");
				}
			}
			printf("\n");
		}
		system("CLS");
	}
}

int node() {
	//��� ���� ���� mapView �迭 [2][i],[3][i],[4][i] 1���� ����
	//���� ������ ��ü �迭�� + 1
	//mapView[2][0] += 1;

}

int render() {
	start = clock();
	mapManager();
	//ȭ�� �����
	system("CLS");
	//�÷��� �ð�, ���ھ�
	int result = (double)(start);
	printf("�÷��� �ð� : %d��		", result / 1000);
	printf("���ھ� : %d��\n\n\n\n", 1223);
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