#include<stdio.h>
#include<windows.h>
#define X 10
#define Y 10
int map[Y][X] = {
	{1,1,1,1,1,1,1,1,1,1,},
	{1,0,0,0,0,0,0,0,0,1,},
	{1,0,0,0,0,0,0,0,0,1,},
	{1,0,0,0,0,0,0,0,0,1,},
	{1,0,0,0,0,0,1,0,0,1,},
	{1,0,0,1,0,1,1,0,0,1,},
	{1,0,0,1,0,1,0,0,0,1,},
	{1,1,1,1,0,1,1,1,0,1,},
	{1,0,0,0,0,0,0,0,0,1,},
	{1,1,1,1,1,1,1,1,1,1,},
};
int Px = 5, Py = 5;
void PlayerMove() {
	char key;
	printf("이동할 방향을 입력해주세요 (w,a,s,d) : ");
	scanf_s("%c", &key, 3);
	switch (key){
	case 'w': //상 버튼
		if (map[Py - 1][Px] != 1) {
			map[Py][Px] = 0;
			Py--;
		}
		break;
	case 'a': //좌 버튼
		if (map[Py][Px - 1] != 1) {
			map[Py][Px] = 0;
			Px--;
		}
		break;
	case 's': //하 버튼
		if (map[Py + 1][Px] != 1) {
			map[Py][Px] = 0;
			Py++;
		}
		break;
	case 'd': //상 버튼
		if (map[Py][Px + 1] != 1) {
			map[Py][Px] = 0;
			Px++;
		}
		break;
	}
	map[Py][Px] = 3;
}
int main() {
	map[Py][Px] = 3;
	while (1){
	for (int i = 0; i < Y; i++) {
		for (int j = 0; j < X; j++) {
			switch (map[i][j]) {
			case 0: printf("□");
				break;
			case 1: printf("■");
				break;
			case 3: printf("★");
				break;
				}
			}
		printf("\n");
		}
	PlayerMove();//플레이어 조종 함수
	system("CLS"); // 콘솔창 지우기
	}
}