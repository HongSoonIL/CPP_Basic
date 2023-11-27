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
	Time operator+(Time&); //시간의 덧셈연산
	Time operator*(int);
	virtual void show(); //가상 메서드 -> 프로그렘에게 서로 독립된 두 개의 매서드 정의가 있다는 것을 알려줌
	//void show(); **이 코드를 실행하기 위해서는 가상 매서드의 코드를 주석처리 할 것!**
	~Time();
	int getHour() { return hours; }
	int getMins() { return mins; }

	/*<friend함수 특징>
	1. 수평적인 관계의 클래스간의 멤버 변수를 공유해야 할 경우 주로 쓰임
	2. 자신의 개체뿐만이 아닌 다른 타입의 개체를 접근하는 것이 가능 */
	friend Time operator*(int n, Time& t) { //시간의 곱셈연산
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time { //Time이라는 오리지널 클래스에 기반하여 NewTime이라는 파생클래스 생성
	/*
	 <파생 클래스 특징>
	1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 맴버들이 저장됨
	2. 파생 클래스의 객체는 기초 클래스형의 매서드들을 사용할 수 있음
	3. 파생 클래스는 자기 자신의 생성자를 필요로 함
	4. 파생 클래스는 부가적인 데이터 맴버들과 멤버 함수들을 임의로 추가할 수 있음
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