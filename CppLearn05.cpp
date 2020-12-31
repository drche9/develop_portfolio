//while문 연습

#include<iostream>
const int answer = 15;
int main() {
	using namespace std;
	int i = 0;

	cout << " 1 ~ 30 사이의 수중 정답을 맞춰주세요 ";
	while (i != answer){
		cin >> i;
		if (i < answer)
			cout << i << " 보다 큽니다.";
		else if (i > answer)
			cout << i << " 보다 작습니다.";
		else
			cout << i << " 맞췄습니다!";
	}
	return 0;
}