#include <iostream>
#include <climits>
//#define PIE 3.1415926535 //파이 상수 선언 (c언어 스타일)

using namespace std;

int main() {
	//변수
	int var;
	var = 5;

	/* <변수 이름 설정 팁>
	1. 숫자로 시작 불가
	2. c++에서 사용하고 있는 키워드는 사용할 수 없음
	3. white space를 사용할수 없음
	*/

	//정수형
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다" << endl;
	cout << "int바이트의 최대값은 " << n_int << "바이트이다" << endl;
	cout << "short는 " << sizeof n_short << "바이트이다" << endl;
	cout << "short바이트의 최대값은 " << n_short << "바이트이다" << endl;
	cout << "long는 " << sizeof n_long << "바이트이다" << endl;
	cout << "long바이트의 최대값은 " << n_long << "바이트이다" << endl;
	cout << "long long는 " << sizeof n_llong << "바이트이다" << endl;
	cout << "long long바이트의 최대값은 " << n_llong << "바이트이다" << endl;

	//unsinged 자료형 -> 음수 범위는 포함하지 않고 양수부분 바이트의 최대값이 2배가 됨
	unsigned short unsignedVar = -1; //만약 b에 -1을 넣으면
	cout << unsignedVar << endl; //unsigend short바이트의 최대값인 65535가 나온다

	//실수형
	float floatC = 3.14;
	int intD = 3.14;
	cout << floatC << " " << intD << endl;

	//작은 문자형
	char arr[] = {'x', 'y', 'z', '\0'};
	cout << arr << endl;
	//null문자 '\0' -> char배열의 문자형을 정확하게 표시하기 위해
	//"" -> 명시적으로 null을 포함 (string 자료형)

	//bool: 0 또는 1
	bool a1 = 0;
	bool b1 = 1;
	bool c1 = 10; //0이외의 값은 1로 출력
	cout << a1 << b1 << c1 << endl;

	//원의 넓이를 구하는 프로그램
	//원의 넓이 = 반지름 * 반지름 * PIE

	const float PIE = 3.1415926535; //상수 선언

	//데이터형 변환
	/*
	1. 특정 데이터형의 변수를 다른 데이터형의 값을 대입했을 때
	2. 수식에 데이터형을 혼합하여 사용했을 때
	3. 함수에 매개변수를 전달할 때
	*/

	int p = 3.14;
	cout << p << endl; //정수부분만 출력

	//강제적으로 데이터 변환
	char ch = 'M';
	//typeName(a) (typeName)a
	cout << (int)ch << " " << int(ch) << endl; //아스키코드에서 해당되는 숫자 출력
	//static_cast<int>(ch)
	cout << static_cast<int>(ch) << endl; //아스키코드에서 해당되는 숫자 출력

	//산술연산자
	/*
	+:더하기 -:빼기 *:곱하기 /:나누기
	>>: 두 개의 피연산자가 모두 정수이면 결과값은 '몫'
	%: 첫 번째 피연산자를 두 번째 피연산자로 나누어진 나머지
	*/
	int a = 10;
	int b = 3;

	cout << "덧샘결과 " << a + b << endl;
	cout << "뺄샘결과 " << a - b << endl;
	cout << "곱샘결과" << a * b << endl;
	cout << "나누샘결과 " << a / b << endl;
	cout << "나머지 " << a % b << endl;

	//auto
	//자동으로 자료형을 지정 (잘 쓰지 않는다)
	auto x = 100; //x는 int
	auto y = 1.5; //y는 float
	auto z = 1.3e12L; //z는 long long

	return 0;
}