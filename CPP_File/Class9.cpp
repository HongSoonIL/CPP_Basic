#include <iostream>
#include "time.h"

using namespace std;

const int  MAX = 3;

int main() {
	//���
	/*
	<����� ���>
	1. ������ Ŭ������ ���ο� ����� �߰��� �� ����
	2. Ŭ������ ��Ÿ���� �ִ� �����Ϳ� �ٸ� ���� �� �߰� �� �� ����
	3. Ŭ���� �ż��尡 �����ϴ� ����� ���� ����
	*/

	/* **�� �ڵ带 �����ϰ��� �� ��, 21 ~ 25��° �� �ڵ忡 �ּ�ó���� �� ��!**
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
		cout << i + 1 << "��° ���Ҹ� �����մϴ�." << endl;
		cout << "�ð��� �Է��Ͻʽÿ�. --> ";
		cin >> hours;
		cout << "���� �Է��Ͻʽÿ�. --> ";
		cin >> mins;
		char check;
		cout << "�� ������ �ִٸ� 1, ���ٸ� 0�� �Է��Ͻʽÿ�. --> ";
		cin >> check;
		if (check == '0')
			times[i] = new Time(hours, mins);
		else {
			cout << "���� �Է��Ͻʽÿ�. --> ";
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "��° �����Դϴ�.";
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
	std::cout << "�ð�: " << hours << std::endl;
	std::cout << "��: " << mins << std::endl;
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
	os << t.hours << "�ð� " << t.mins << "��";
	return os;
}

NewTime::NewTime() : Time() {
	day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h, m) {
	day = d;
}

void NewTime::print() {
	std::cout << "��: " << day << std::endl;
	show();
}

void NewTime::show() {
	std::cout << "��: " << day << std::endl;
	std::cout << "�ð�: " << getHour() << std::endl;
	std::cout << "��: " << getMins() << std::endl;
}