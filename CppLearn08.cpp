//�迭 01
#include<iostream>
int main() {
	using namespace std;
	int i, score[4][2], sum[2];
	float average[2];

	//���� ����
	score[0][0] = 90;
	score[1][0] = 87;
	score[2][0] = 100;
	score[3][0] = 85;

	//���� ����
	score[0][1] = 98;
	score[1][1] = 79;
	score[2][1] = 92;
	score[3][1] = 76;

	for (i = 0, sum[0] = 0, sum[1] = 0; i < 4; i++) {
		sum[0] += score[i][0];
		sum[1] += score[i][1];
	};

	average[0] = sum[0] / 4;
	average[1] = sum[1] / 4;

	cout << "���� ��ü ���� : " << sum[0] << ", ���� ��� ���� : " << average[0] << endl;
	cout << "���� ��ü ���� : " << sum[1] << ", ���� ��� ���� : " << average[1] << endl;

}