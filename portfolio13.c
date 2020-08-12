#include<stdio.h>
//피보나치

// 0 1 2 3 4 5 6 7 8 9... 
// 0 1 1 2 3 5 8 13 21 34

// index
// frontValue, backValue

void fibonaci(int index, int frontValue, int backValue){ // 0 1 result == 1
	int result = frontValue + backValue;
	
	if(index == 0){
		printf("%d ", result);
		return;
	}
	printf("%d ", result);
	fibonaci(index - 1, backValue, result);
}

int main() {
	fibonaci(15, 0, 1);
	return 0;
}