#ifndef STOCK
#define STOCK
#include <iostream>

using namespace std;


//클래스 생성
class Stock
{
private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = shares * share_val; }

public:
	void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	Stock& topval(Stock&);
	void show();
	Stock(string co, int n, float pr);
	Stock();
	~Stock();
};
#endif // !STOCK