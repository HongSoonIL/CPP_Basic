#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> //strlen()을 사용하기 위해
#define SIZE 20

using namespace std;

/*
	<C++ 객체지향 프로그래밍 특징>
	- 컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다
	- 배열의 크기를 실행 시간 결정
*/

//구조체 생성
struct MyStruct
{
	char name[20];
	int age;
};

int main() {
	/*
	c++은 복합 데이터형을 제공한다
	>> 사용자정의대로 새로운 데이터형을 만들 수 있다
	복합데이터형: 기본 정수형과 부동소수점형과 조합
	*/

	//배열 array : 같은 데이터형의 집
	//typeName arrayName[arraySize];
	short month[12] = { 1,2,3 };

	cout << month[0] << endl; //배열의 첫번째 요소 출력

	/*
	<배열선언 팁>
	1. 초기화를 선언 이후 나중에 할 수 없음
	2. 배열을 다른 배열로 통째로 대입할 수 없음
	3. 초기화 할 값의 개수를 원소의 개수보다 적게 제공할 수 있음
	4. 배열을 부분적으로 초기화하면, 나머지 원소들은 모두 0으로 설정
	*/

	//문자열
	char hello[] = "Hello"; //""사용가능 -> Hello라는 문자열 완성
	cout << hello << endl;


	//사용자 입력
	const int size = 15; //배열의 크기는 15로 설정
	char name1[size]; //비어있는 배열
	char name2[size] = "C++programing"; //문자열 상수로 초기화된 배열

	cout << "안녕하세요 저는 " << name2;
	cout << "입니다. 성함이 어떻게 되세요? \n";
	cin >> name1; //사용자이름 입력 --> name1 배열에 저장
	//cin.get(name1, size); --> 윗 줄과 같은 결과
	cout << name1 << "씨, 당신의 이름은 "; //name1배열 출력
	cout << strlen(name1) << "자 입니다만\n"; //name1배열의 입력한 원소의 개수
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다\n";
	cout << name1[0] << "자로 시작하는군요\n"; //name1배열의 첫 번째 요소
	name2[3] = '\0'; //name2배열의 4번째 원소를 null로 설정
	cout << "제 이름의 첫 세 문자는 다음과 같습니다 " << name2 << endl;

	//string
	string str1;
	string str2 = "hong";
	str1 = str2; //string의 경우, 문자열을 통째로 대입 가능
	cout << str1 << endl;

	//구조체: 다른 데이터형이 허용되는 데이터의 집합

	//ex) 축구선수 손흥민
	struct PlayerStruct {
		string name;
		string position;
		float height;
		float weight;
	};
	/*
	MyStruct A;
	A.name = "Son";
	A.position = "WingForward";
	A.height = 183.0;
	A.weight = 77.0;
	*/

	//표기1
	PlayerStruct A {
		"son",
		"WingForward",
		183.0,
		77.0
	};

	//표기2
	PlayerStruct B[2] = {
		{"Son", "LW", 183, 77},
		{"Kim", "CB", 190, 87}
	};
	cout << B[0].height << endl; //B구조체의 첫 번째 배열에서 키 출력하기

	//공용체(union): 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음
	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};
	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl; //int형만 출력
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl; //float형만 출력

	//열거체(enum): 기호 상수를 만드는 것에 대한 또다른 방법
	enum spectrum {
		red, orenge, yellow, green,
		blue, violet, indigo, ultraviolet
	};
	/*
	1. spectrum을 새로운 데이터형 이름으로 만듬
	2. 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 나타냄 
	*/
	spectrum spectrumA = orenge;
	cout << spectrumA << endl; //orenge에 해당하는 정수 값 출력

	int colorB;
	colorB = blue; //b는 blue에 해당하는 정수인 4이다
	colorB = blue + 3;
	cout << colorB << endl; //결과 -> 7


	// 포인터: 사용할 주소에 이름을 붙인다
	// 즉, 포인터는 포인터의 이름이 주소를 나타냄

	/*
	int *a1; //c style
	int* b1; //c++ style
	*/
	int a = 6; //수
	int* b;	//위치(주소)
	b = &a; //변수a의 주소를 포인터 변수 b에 대입
	cout << "a의 값 " << a << endl;
	cout << "*b의 값 " << *b << endl;

	cout << "a의 주소 " << &a << endl;
	cout << "*b의 주소 " << b << endl;
	*b = *b + 1; //주소의 값 변화

	cout << "이제 a의 값은 " << a << endl;

	//new연산자
	/*
	어떤 연산자	데이터형을 원하는지 new 연산자형에 알려주면,
	new연산자는 그에 맞는 크기의 메모리 블록을 찾아내고 그 블록의 주소를 리턴
	*/
	int* pointer = new int;

	//delete연산자 --> new연산자를 사용하고 나서 반드시 필요
	/*
	사용한 메모리를 다시 메모리 폴로 환수,
	환수된 메모리는 프로그램의 다른 부분이 사용
	*/
	int* ps1 = new int;
	delete ps1;

	/*
	<포인터 변수 선언 팁>
	1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다
	2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다
	3. new[]로 대입한 경우, delete[]로 해제한다 (사용하지 않은 경우도 마찬가지!)
	*/

	double* p3 = new double[3]; // double형 데이터 3개를 저장할 수 있는 공간을 대입 
	p3[0] = 0.2; // p3를 배열 이름처럼 취급
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1; //포인터 증가 --> 배열의 값을 1씩 앞당김
	cout << "Now p3[0] is " << p3[0] << " and "; // p3[0] = 0.5
	cout << "p3[1] is " << p3[1] << "\n."; // p3[1] = 0.8

	p3 = p3 - 1; //다시 시작위치를 지시
	delete[] p3;//배열 메모리 해제


	char animal[SIZE]; //크기가 20인 배열 선언
	char* ps; //포인터 변수 지정


	cout << "동물 이름을 입력하십시오.\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1]; //new연산자를 통해 사용자가 입력한 글자수 + 1 만큼 포인터 변수에 지정
	strcpy(ps, animal); //값을 복사

	cout << "입력하신 동물 이름을 복사하였습니다." << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

	delete[] ps;

	//동적 구조체 생성
	//temp* ps = new temp;
	MyStruct* temp = new MyStruct;

	cout << "당신의 이름을 입력하십시오.\n";
	cin >> temp->name;

	cout << "당신의 나이를 입력하십시오.\n";
	cin >> (*temp).age;

	cout << "안녕하세요! " << temp->name << "씨!\n";
	cout << "당신은 " << temp->age << "살 이군요!\n";

	delete temp;

	return 0;
}