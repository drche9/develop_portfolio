//C++ if�� ����

#include<iostream>
int main() {
	//if�� ����
	/*using namespace std;
	int i = 10;
	if (i > 5) {
		cout << "10�� 5���� Ů�ϴ�. \n";
	}
	return 0;*/
	//else if�� ����
	using namespace std;
	int i;
	cout << "���ڸ� �Է��ϼ��� : ";
	cin >> i;
	if (i < 0) {
		cout << "i�� ���� �Դϴ�.\n";
	}
	else if (i > 0) {
		cout << "i�� ����Դϴ�.\n";
	}
	else if (i == 0) {
		cout << "i�� 0 �Դϴ�.\n";
	}
}