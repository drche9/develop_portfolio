//do while문 연습
#include<iostream>
const int answer = 15;
int main() {
	using namespace std;
	int i;
	cout << "1 ~ 30 사이의 수 중 정답을 맞춰주세요 : ";
	do {
		cin >> i;
		if (i < answer) {
			cout << i << "보다 큽니다.";
		}
		else if (i > answer) {
			cout << i << "보다 작습니다.";
		}
		else
			cout << i << "맞았습니다";
	} while (i != answer);

	return 0;
}