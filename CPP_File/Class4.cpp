#include <iostream>

using namespace std;

const int SIZE = 30;

int main() {
	//if구문
	if (true) {
		cout << "조건이 참입니다 ";
	}
	else {
		cout << "조건이 거짓입니다 ";
	}
	cout << "프로그램이 종료되었습니다\n";

	//논리표현식
	/*
	논리합: 논리 or 연산자라고도 불리는 논리합 연산자는 
			두 피연사자 중 하나라도 '참'이면 true를 반환하고 그렇지 않않다면 '거짓'을 반환
	기호: ||
	ex)
	5 == 5 || 5 == 9 -> true
	5 > 3 || 5 > 10 -> true
	5 > 8 || 5 < 10 -> true
	5 > 9 || 5 < 2 -> false
	*/

	/*
	논리곱: 논리 and 연산자라고도 불리는 논리곱 연산자는
			두 피연사자 모두 '참'이면 true를 반환하고 그렇지 않않다면 '거짓'을 반환
	기호: &&
	ex)
	5 == 5 && 9 == 9 -> true
	5 == 5 && 9 != 9 -> false
	10 < 2 && 10 > 2 -> false
	*/

	/*
	논리부정 연산자: 피연산자가 true를 반환하면 반대로 전체 식은 false가 되고, 
					 피연산자가 false를 반환하면 반대로 전체 식은 true
	ex)
	!(5 > 3) -> false
	!(5 < 3) -> true
	*/

	cout << "당신의 나이를 입력하십시오: ";
	int age;
	cin >> age;

	if (age < 0 || age>100) {
		cout << "거짓말 하시면 안됩니다\n";
	}
	else if (age >= 20 && age <= 29) {
		cout << "당신은 20대이군요\n";
	}
	else {
		cout << "당신의 나이를 모르겠습니다\n";
	}
	//switch
	int a;
	cout << "숫자를 입력하시오(1 ~ 5): ";
	cin >> a;

	switch (a)
	{
	case 1:
		cout << "1을 입력했습니다\n";
		break;
	case 2:
		cout << "2을 입력했습니다\n";
		break;
	case 3:
		cout << "3을 입력했습니다\n";
		break;
	case 4:
		cout << "4을 입력했습니다\n";
		break;
	case 5:
		cout << "5을 입력했습니다\n";
		break;
	default:
		cout << "Error: out of range!\n";
		break;
	}
	cout << "switch구문이 끝났습니다\n";
	
	/**************************************************************************************
	**아래의 코드를 실행하고자 한다면 main함수 안에 있는 다른 코드를 주석처리 해야합니다.**
	***************************************************************************************/

	//continue
	cout << "문장을 입력하시오: ";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "입력하신 문장은";

	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) { //입력한 문장에서 null이 나올때 까지 for문 반복
		cout << line[i];

		if (line[i] == ' ')//공백일때 건너뛰기
			continue;
		
		spaces++;
	}
	cout << "입니다\n";
	cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개 입니다\n";

	return 0;
}