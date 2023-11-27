#include <iostream>

using namespace std;

int main() {

	/*
	* <for문 작동 순서>
	1. 반복문에 사용할 카운터의 값을 초기화
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 실행
	4. 카운터의 값 변화
	*/

	/*
	for (int i = 0; i < 5; i++) {
		cout << i << "번째입니다" << endl;
	}
	*/

	//증가 연산자, 감소 연산자
	int a = 10;
	int b = 10;
	cout << "a++: " << a++ << endl; //a출력 후, 1을 더함
	cout << "++b: " << ++b << endl; //1을 더한 후, b를 출력 함
	cout << "after a++: " << a << endl; 

	//while
	string str = "hong";
	int j = 0;
	while (str[j] != '\0') {
		cout << str[j] << endl;
		j++;
	}

	int k = 0;
	do {
		cout << "while문입니다\n";
		k++;
	} while (k < 3);

	//배열 기반 반복문
	int arr[5] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; i++) {
		cout << arr[i];
	}
	cout << "\n";
	for (int i : arr) {
		cout << i;
	}
	cout << "\n";

	//중첩 루프 --> 2차원 배열
	int temp[4][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20}
	};

	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}

	return 0;
}