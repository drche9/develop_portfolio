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
	printf("�̵��� ������ �Է����ּ��� (w,a,s,d) : ");
	scanf_s("%c", &key, 3);
	switch (key){
	case 'w': //�� ��ư
		if (map[Py - 1][Px] != 1) {
			map[Py][Px] = 0;
			Py--;
		}
		break;
	case 'a': //�� ��ư
		if (map[Py][Px - 1] != 1) {
			map[Py][Px] = 0;
			Px--;
		}
		break;
	case 's': //�� ��ư
		if (map[Py + 1][Px] != 1) {
			map[Py][Px] = 0;
			Py++;
		}
		break;
	case 'd': //�� ��ư
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
			case 0: printf("��");
				break;
			case 1: printf("��");
				break;
			case 3: printf("��");
				break;
				}
			}
		printf("\n");
		}
	PlayerMove();//�÷��̾� ���� �Լ�
	system("CLS"); // �ܼ�â �����
	}
}