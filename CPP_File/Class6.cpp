#include <iostream>

using namespace std;

const int SIZE = 8;
int sumArray(int*, int = 1); //int = 1; -> 디폴트 매개변수 선언

//인라인 함수 선언
inline float square(float x) { return x * x; }

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

//함수 오버로딩 사용을 위한 함수
int sumNumber(int, int);
float sumNumber(float, float);

//템플릿 선언
template <class Any> //class또는 typeName으로 작성가능
Any sumTemplate(Any, Any);
template <class Any>
Any sumTemplate(int, Any);

int main() {
	//인라인 함수
	/*
	일반적인 함수 호출 -> 함수의 주소로 점프하는 과정
	인라인 함수 -> 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
	컴파일러의 인라인함수 호출 -> 점프가 아닌 그에 대응하는 함수 코드로 대체
	*/
	int side = 5;
	cout << "한 변의 길이가 " << side << "인 정사각형의 넓이는? ";
	float area = square(side);
	cout << area << endl;

	//디폴트 매개변수 -> 함수를 호출할때, 매개변수를 생략하면 기본적인 매개변수를 뜻함
	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	int sum = sumArray(arr); //sumArr함수에 배열의 크기 파라미터를 삭제 -> 6번째 줄에서 선언한 디폴트 매개변수인 1이 대신함
	cout << "함수의 총합은 " << sum << "입니다\n";
	
	//참조(reference): 미리 정의된 변수의 실제 이름 대신 사용할 수 있는 대용 이름
	//함수의 매개변수에 사용
	int val;
	int& ref = val;

	int wallet1 = 100;
	int wallet2 = 200;

	cout << "최초 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "참조를 이용한 값의 교환\n";
	swapA(wallet1, wallet2);
	cout << "참조 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "포인터를 이용한 값의 교환\n";
	swapB(&wallet1, &wallet2);
	cout << "포인터를 이용한 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "값을 이용한 값의 교환\n";
	swapC(wallet1, wallet2);
	cout << "값을 이용한 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	//함수 오버로딩 -> 여러 개의 함수를 같은 이름으로 연결함
	//데이터 형은 다르지만 같은 작업을 하는 것에 사용
	/*
	<함수 오버로딩을 사용할 수 없는 경우>
	1. 함수의 리턴형만 다른 경우
	2. 함수를 사용할 때, 두 개 이상의 함수에 대응되는 경우
	*/
	cout << "두 정수를 입력하십시오. \n";
	int a, b;
	cin >> a >> b;
	cout << "두 정수의 합은 " << sumNumber(a, b) << "입니다.\n";
	cout << "두 실수를 입력하십시오. \n";
	float c, d;
	cin >> c >> d;
	cout << "두 실수의 합은 " << sumNumber(c, d) << "입니다.\n";

	//함수 템플릿 -> 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
	int e = 3;
	int f = 4;
	//cout << sumTemplate(a, b) << endl;

	float g = 3; 14;
	float h = 1.592;
	cout << sumTemplate(g, h) << endl;
	cout << sumTemplate(e, g) << endl;

	return 0;
}

int sumArray(int* arr, int n) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}

//참조로 전달하는 형식
void swapA(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

//포인터로 전달하는 방식
void swapB(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//값으로 전달하는 방식
void swapC(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int sumNumber(int a, int b) {
	return a + b;
}

float sumNumber(float a, float b) {
	return a + b;
}

template <class Any>
Any sumTemplate(Any a, Any b) {
	return a + b;
}

template <class Any>
Any sumTemplate(int a, Any b) {
	return a + b;
}