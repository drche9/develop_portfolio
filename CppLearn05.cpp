//while�� ����

#include<iostream>
const int answer = 15;
int main() {
	using namespace std;
	int i = 0;

	cout << " 1 ~ 30 ������ ���� ������ �����ּ��� ";
	while (i != answer){
		cin >> i;
		if (i < answer)
			cout << i << " ���� Ů�ϴ�.";
		else if (i > answer)
			cout << i << " ���� �۽��ϴ�.";
		else
			cout << i << " ������ϴ�!";
	}
	return 0;
}