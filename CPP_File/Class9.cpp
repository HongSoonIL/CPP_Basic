#include <iostream>
#include "time.h"

using namespace std;

const int  MAX = 3;

int main() {
	//상속
	/*
	<상속의 기능>
	1. 기존의 클래스에 새로운 기능을 추가할 수 있음
	2. 클래스가 나타내고 있는 데이터에 다른 것을 더 추가 할 수 있음
	3. 클래스 매서드가 동작하는 방식을 변경 가능
	*/

	/* **이 코드를 실행하고자 할 때, 21 ~ 25번째 줄 코드에 주석처리를 할 것!**
	NewTime temp1();
	NewTime temp2(3, 30, 2);
	temp2.print();
	*/

	Time temp1(30, 2);
	NewTime temp2(3, 30, 2);

	temp1.show();
	temp2.show();

	Time* times[MAX];
	int day;
	int hours;
	int mins;

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 원소를 정의합니다." << endl;
		cout << "시간을 입력하십시오. --> ";
		cin >> hours;
		cout << "분을 입력하십시오. --> ";
		cin >> mins;
		char check;
		cout << "일 정보가 있다면 1, 없다면 0을 입력하십시오. --> ";
		cin >> check;
		if (check == '0')
			times[i] = new Time(hours, mins);
		else {
			cout << "일을 입력하십시오. --> ";
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 정보입니다.";
		times[i]->show();
	}

	for (int i = 0; i < MAX; i++) {
		delete times[i];
	}

	return 0;
}

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m) {
	hours = h;
	mins = m;
}

void Time::addHours(int h) {
	hours += h;
};

void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
};

Time Time::operator+(Time& t) {
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
};

void Time::show() {
	std::cout << "시간: " << hours << std::endl;
	std::cout << "분: " << mins << std::endl;
}

Time::~Time()
{
}

Time Time::operator*(int n) {
	Time result;
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}

std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << "시간 " << t.mins << "분";
	return os;
}

NewTime::NewTime() : Time() {
	day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h, m) {
	day = d;
}

void NewTime::print() {
	std::cout << "일: " << day << std::endl;
	show();
}

void NewTime::show() {
	std::cout << "일: " << day << std::endl;
	std::cout << "시간: " << getHour() << std::endl;
	std::cout << "분: " << getMins() << std::endl;
}