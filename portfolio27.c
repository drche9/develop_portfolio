#include<stdio.h>
int main() {
	/*char index[3] = { 'A','B','C'};
	printf("%c %c %c %c %c %c", index[0], index[1], index[2], index[2], index[1], index[0]);*/
	/*int student[10] = { 60,80,90,20,50,60,70,10,75,95 };
	int total = student[0] + student[1] + student[2] + student[3] + student[4] + student[5] + student[6] + student[7] + student[8] + student[9];
	printf("���� ==> %d\n��� ==> %d", total, total / 10);*/
	/*int line0[5] = { 90,78,77,98,98 };
	int line1[5] = { 80,45,67,88,57 };
	int line2[5] = { 88,99,65,55,74 };
	//================================
	//���� ����
	int Transverse0 = line0[0] + line0[1] + line0[2] + line0[3] + line0[4];
	int Transverse1 = line1[0] + line1[1] + line1[2] + line1[3] + line1[4];
	int Transverse2 = line2[0] + line2[1] + line2[2] + line2[3] + line2[4];
	//================================
	//���� ����
	int length0 = line0[0] + line1[0] + line2[0];
	int length1 = line0[1] + line1[1] + line2[1];
	int length2 = line0[2] + line1[2] + line2[2];
	int length3 = line0[3] + line1[3] + line2[3];
	int length4 = line0[4] + line1[4] + line2[4];

	int total = Transverse0 + Transverse1 + Transverse2 + length0 + length1 + length2 + length3 +length4;

	printf("0��° ���� �� : %d\n", Transverse0);
	printf("1��° ���� �� : %d\n", Transverse1);
	printf("2��° ���� �� : %d\n", Transverse2);
	printf("0��° ���� �� : %d\n", length0);
	printf("1��° ���� �� : %d\n", length1);
	printf("2��° ���� �� : %d\n", length2);
	printf("3��° ���� �� : %d\n", length3);
	printf("4��° ���� �� : %d\n", length4);
	printf("���� �� ==> %d", total);*/
	/*int gugudan[9];
	int number = 0;
	printf("�� �Է� ==> ");
	scanf_s("%d", &number);
	for (int i = 1; i < 10; i++) {
		int total = number * i;
		gugudan[i] = total;
		printf("%d * %d = %d \n",number,i, gugudan[i]);
	}
	return 0;*/
	/*float line0[5] = { 2.2, 3.5, 2.5, 10.1, 4.0 };
	float line1[5] = { 3.3, 2.0, 4.0, 1.0, 2.5 };
	for (int i = 0; i < 5; i++) {
		printf("%.2lf * %.2lf = %.2lf\n", line0[i], line1[i],line0[i] * line1[i]);
	}*/
	/*char array0[5] = { 'A', 'B', 'C', 'D', 'E' };
	int array1[5] = { 10, 20, 30, 40, 50 };
	double array2[5] = { 10.1, 20.2, 30.3, 40.4, 50.5 };
	printf("array0 �迭�� �ּҰ��� => ");
	for (int i = 0; i < 5; i++) {
		printf("%x ", &array0[i]);
	}
	printf("\narray0 �迭�� ���� => ");
	for (int i = 0; i < 5; i++) {
		printf("%x ", *&array0[i]);
	}
	//=====================================
	printf("\narray1 �迭�� �ּҰ��� => ");
	for (int i = 0; i < 5; i++) {
		printf("%x ", &array1[i]);
	}
	printf("\narray1 �迭�� ���� => ");
	for (int i = 0; i < 5; i++) {
		printf("%x ", *&array1[i]);
	}
	//=====================================
	printf("\narray2 �迭�� �ּҰ��� => ");
	for (int i = 0; i < 5; i++) {
		printf("%x ", &array2[i]);
	}
	printf("\narray2 �迭�� ���� => ");
	for (int i = 0; i < 5; i++) {
		printf("%x ", *&array2[i]);
	}
	return 0;*/
}