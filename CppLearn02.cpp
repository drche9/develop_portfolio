//C++ if문 연습

#include<iostream>
int main() {
	//if문 연습
	/*using namespace std;
	int i = 10;
	if (i > 5) {
		cout << "10은 5보다 큽니다. \n";
	}
	return 0;*/
	//else if문 연습
	using namespace std;
	int i;
	cout << "숫자를 입력하세요 : ";
	cin >> i;
	if (i < 0) {
		cout << "i는 음수 입니다.\n";
	}
	else if (i > 0) {
		cout << "i는 양수입니다.\n";
	}
	else if (i == 0) {
		cout << "i는 0 입니다.\n";
	}
}