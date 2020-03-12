//ÇÔ¼ö - ÀÚÆÇ±â
//Vending machine = Vm
//level_up club portfolio_00

#include<stdio.h>
#include<stdlib.h>

void menu(){
	printf("!Vending machine!\n\n");
	printf("\"Menu\"\n0.Orange: 1000\n");
	printf("1.Strawberry: 1500\n2.grape: 2000\n\ninput number");
}

int compar(int money) {
	if (money < 0) {
		printf("\nÀÜ¾×ºÎÁ· \n");
		return money;
	}
}
int Vm(int money, int num) {
	int Orange = 1000;
	int Strawberry = 1500;
	int grape = 2000;
	while (1) {
		if (num == 0) {
			money = money - Orange;
			compar(money);
			break;
		}
		else if (num == 1) {
			money = money - Strawberry;
			compar(money);
			break;
		}
		else if (num == 2) {
			money = money - grape;
			compar(money);
			break;
		}
	}
	return money;
}

int main() {
	int money = 10000;
	int num = 0;
	menu();
	printf("your money:%d\n\n", money);
	scanf_s("%d", &num);
	//µ·À» »©ÁÖ°í, ÀÜ¾× ºÎÁ·
	money = Vm(money,num);
	if (money >= 0) {
		printf("money : %d", money);
	}
	return 0;
}