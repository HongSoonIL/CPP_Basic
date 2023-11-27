#include <iostream>

#ifndef TIMEH
#define TIMEH

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&); //�ð��� ��������
	Time operator*(int);
	virtual void show(); //���� �޼��� -> ���α׷����� ���� ������ �� ���� �ż��� ���ǰ� �ִٴ� ���� �˷���
	//void show(); **�� �ڵ带 �����ϱ� ���ؼ��� ���� �ż����� �ڵ带 �ּ�ó�� �� ��!**
	~Time();
	int getHour() { return hours; }
	int getMins() { return mins; }

	/*<friend�Լ� Ư¡>
	1. �������� ������ Ŭ�������� ��� ������ �����ؾ� �� ��� �ַ� ����
	2. �ڽ��� ��ü�Ӹ��� �ƴ� �ٸ� Ÿ���� ��ü�� �����ϴ� ���� ���� */
	friend Time operator*(int n, Time& t) { //�ð��� ��������
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time { //Time�̶�� �������� Ŭ������ ����Ͽ� NewTime�̶�� �Ļ�Ŭ���� ����
	/*
	 <�Ļ� Ŭ���� Ư¡>
	1. �Ļ� Ŭ�������� ��ü �ȿ��� ���� Ŭ�������� ������ �ɹ����� �����
	2. �Ļ� Ŭ������ ��ü�� ���� Ŭ�������� �ż������ ����� �� ����
	3. �Ļ� Ŭ������ �ڱ� �ڽ��� �����ڸ� �ʿ�� ��
	4. �Ļ� Ŭ������ �ΰ����� ������ �ɹ���� ��� �Լ����� ���Ƿ� �߰��� �� ����
	*/
private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void print();
	void show();

};
#endif // !TIMEH