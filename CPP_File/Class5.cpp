#include <iostream>

using namespace std;

const float PIE = 3.14;
const int SIZE = 8;
const int minsPerHr = 60;

//구조체 생성
struct Time {
	int hours;
	int mins;
};

//사용하는 함수 원형 정의
void cheers(int n);
float circle(int x);
void helloCPP(int n, int m);
int sumArr(int[], int);
int sumArrPt(int*, int*);
void showTime(Time);
void countDown(int);
int func(int);


//구조체 함수 정의
Time sumTime(Time*, Time*);

int main() {
	int a;
	cout << "하나의 수를 입력하시오: ";
	cin >> a;
	cheers(a); //함수 호출

	int b;
	cout << "원의 반지름을 입력하시오: ";
	cin >> b;
	float c = circle(b); //함수 호출
	cout << "\n원의 넓이는 " << c << "입니다" << endl;

	int times, times2;
	cout << "정수를 입력하시오: ";
	cin >> times;
	cout << "\n정수를 한 번 더 입력하시오: ";
	cin >> times2;
	helloCPP(times, times2);

	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	int sum = sumArr(arr, SIZE);
	cout << "함수의 총합은 " << sum << "입니다\n";

	int sumPt = sumArrPt(arr, arr + SIZE);
	cout << "함수의 " << SIZE << "까지의 합은 " << sumPt << "입니다\n";
	int n = 0;
	cout << "인덱스 숫자를 입력하시오: ";
	cin >> n;
	sumPt = sumArrPt(arr, arr + n);
	cout << "함수의" << n << "번째 인덱스 까지의 합은 " << sumPt << "입니다\n";

	Time day1 = { 5, 45 };
	Time day2 = { 4, 55 };

	Time totalTime = sumTime(&day1, &day2);

	cout << "이틀간 소요 시간 : ";
	showTime(totalTime);

	//재귀 호출: 함수가 자기 자신을 호출
	countDown(5);

	//함수를 지시하는 포인터
	//어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우, 유용하게 사용가능
	/*
	* <사용순서>
	1. 함수의 주소를 얻음 (파라미터는 제외하고 함수 이름만 작성하면 됨 )
	2. 함수를 지시하는 포인터를 선언
	3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출
	*/
	int(*pf)(int);
	pf = func;
	cout << (*pf)(3) << endl;
	
	return 0;
}

//함수 정의
void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
}

float circle(int x) {
	return x * x * PIE;
}

void helloCPP(int n, int m) {
	for (int i = 0; i < n; i++) {
		cout << "hello c++\n";
	}
	for (int j = 0; j < m; j++) {
		cout << "C++\n";
	}
}

int sumArr(int arr[], int n) { //배열의 원소들을 더하는 함수
	int total = 0; 
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	return total;
}

int sumArrPt(int* begin, int* end) { //포인터를 이용하여 함수의 n번째 인덱스 까지의 합을 구하는 함수
	int totalPt = 0;
	int* pt;

	for (pt = begin; pt != end; pt++) {
		totalPt += *pt;
	}

	return totalPt;
}


	Time sumTime(Time* t1, Time* t2) {
		Time totalTime;
		//값에서 맴버로 접근할 때: .
		//주소에서 맴버로 접근할 때(포인터 이용): ->

		totalTime.mins = (t1->mins + t2->mins) % minsPerHr;
		totalTime.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / minsPerHr;

		return totalTime;
	}

	void showTime(Time t1) {
		cout << t1.hours << "시간 " << t1.mins << "분 입니다." << endl;
	}

	void countDown(int n) {
		cout << "Counting..." << n << endl;
		if (n > 0) { //countDown(0)이 될때까지 반복실행
			countDown(n - 1);
		}
		cout << "n번째 재귀함수 " << endl;
	}

	int func(int n) {
		return n + 1;
	}