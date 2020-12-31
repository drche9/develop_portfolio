//배열 01
#include<iostream>
int main() {
	using namespace std;
	int i, score[4][2], sum[2];
	float average[2];

	//영어 성적
	score[0][0] = 90;
	score[1][0] = 87;
	score[2][0] = 100;
	score[3][0] = 85;

	//수학 성적
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

	cout << "영어 전체 성적 : " << sum[0] << ", 영어 평균 성적 : " << average[0] << endl;
	cout << "수학 전체 성적 : " << sum[1] << ", 수학 평균 성적 : " << average[1] << endl;

}