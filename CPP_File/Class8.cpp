#include <iostream>
#include "time.h"

using namespace std;

int main() {
	//������ �����ε�
	//�ڷ����� ���� �����͵��� ���� �ǿ����ڷμ� C++ ���� �����ϴ� �����ڷ� �����ϴ� ��

	Time day1(1, 40);
	Time day2(2, 30);

	day1.show();
	day2.show();

	Time total;
	total = day1.operator+(day2); //�ð��� ��������
	total.show();

	//C++ friend
	Time t1(1, 20);
	Time t2;

	t2 = t1 * 3; //t2 = operator * (3, t1);
	t2.show();

	// << ������ �����ε�
	Time time1(3, 45);
	time1.show();
	cout << time1;

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