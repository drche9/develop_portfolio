#include<iostream>
#include<string>
int main() {
	using namespace std;
	//for��00
	/*int i;
	for (i = 0; i < 3; i++) {
		cout << "C++�� ���\n";
	}
	cout << "for�� ��" << endl;
	return 0;*/
	//for��01
	string word;
	char temp;
	cout << "������ �ܾ �Է��ϼ��� : ";
	cin >> word;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j) {
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << endl;
	return 0;

}