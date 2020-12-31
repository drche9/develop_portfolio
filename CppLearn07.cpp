//배열 00
#include<iostream>
int main() {
	using namespace std;
	int score[4];
	int i, sum;
	float average;

	for (i = 0, sum = 0; i < 4; i++) {
		cout << i + 1 << " 번째 학생 성적을 입력하시오 : ";
		cin >> score[i];
		sum += score[i];
	}

	average = sum / 4;
	for (i = 0; i < 4; i++) {
		cout << i + 1 << " 번째 학생 성적 : " << score[i] << endl;
	}

	cout << "전체 성적 : " << sum << endl;
	cout << "평균 성적 : " << average << endl;

	return 0;
}