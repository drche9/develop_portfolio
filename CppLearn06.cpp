//do while�� ����
#include<iostream>
const int answer = 15;
int main() {
	using namespace std;
	int i;
	cout << "1 ~ 30 ������ �� �� ������ �����ּ��� : ";
	do {
		cin >> i;
		if (i < answer) {
			cout << i << "���� Ů�ϴ�.";
		}
		else if (i > answer) {
			cout << i << "���� �۽��ϴ�.";
		}
		else
			cout << i << "�¾ҽ��ϴ�";
	} while (i != answer);

	return 0;
}