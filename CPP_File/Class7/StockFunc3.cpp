/*
�� ������ Class7-3.cpp�� �����˴ϴ�
*/

#include "Stock.h"

void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "ȸ�� �� : " << name << endl;
	cout << "�ֽ� �� : " << shares << endl;
	cout << "�ְ� : " << share_val << endl;
	cout << "�ֽ� �� ��ġ : " << total_val << endl;
}
Stock& Stock::topval(Stock& s) {
	if (s.share_val > share_val)
		return s;
	else return *this; //this������ -> �ɹ��Լ��� ȣ���ϴµ� ���� ��ü�� ������
}

Stock::Stock(string co, int n, float pr)
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() {
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock()
{
}