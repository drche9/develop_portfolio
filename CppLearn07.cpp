//�迭 00
#include<iostream>
int main() {
	using namespace std;
	int score[4];
	int i, sum;
	float average;

	for (i = 0, sum = 0; i < 4; i++) {
		cout << i + 1 << " ��° �л� ������ �Է��Ͻÿ� : ";
		cin >> score[i];
		sum += score[i];
	}

	average = sum / 4;
	for (i = 0; i < 4; i++) {
		cout << i + 1 << " ��° �л� ���� : " << score[i] << endl;
	}

	cout << "��ü ���� : " << sum << endl;
	cout << "��� ���� : " << average << endl;

	return 0;
}