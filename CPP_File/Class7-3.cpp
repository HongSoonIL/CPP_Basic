
/********************소스파일 실행 전 필독!**********************
		- StockFunc3.cpp파일을 빌드에서 제외를 해제해야 함
 ****************************************************************/

#include <iostream>
#include "Stock.h"

int main() {

	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 1200);

	s1.show();
	s2.show();

	cout << "A와 B중 share_val이 더 큰 객체는?\n";
	s1.topval(s2).show();
	
	//Stock배열 생성
	Stock s[4] = {
		Stock("A", 10, 1000),
		Stock("B", 20, 1200),
		Stock("C", 20, 1300),
		Stock("D", 20, 1400)
	};

	Stock* first = &s[0];
	for (int i = 1; i < 4; i++)
		first = &first->topval(s[i]); //Stock배열의 앞뒤 원소들의 크기비교

	first->show(); //주가가 가장 큰 값을 가진 배열의 원소들을 출력

	return 0;
}