#include<iostream>
#include<string>
int main() {
	using namespace std;
	//for문00
	/*int i;
	for (i = 0; i < 3; i++) {
		cout << "C++의 제어문\n";
	}
	cout << "for문 끝" << endl;
	return 0;*/
	//for문01
	string word;
	char temp;
	cout << "뒤집을 단어를 입력하세요 : ";
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