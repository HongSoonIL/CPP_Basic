
/********************소스파일 실행 전 필독!**********************
	   - StockFunc2.cpp파일을 빌드에서 제외를 해제해야 함
 ****************************************************************/

#include <iostream>
#include "Stock.h"

using namespace std;

int main() {
	cout << "생성자를 이용해 객체 생성\n";
	Stock temp("Panda", 100, 1000);

	cout << "디폴트 생성자를 이용하여 객체 생성\n";
	Stock temp2;

	cout << "temp와 temp2 출력\n";
	temp.show();
	temp2.show();

	cout << "생성자를 이용하여 temp 내용 재설정\n";
	temp = Stock("Coding", 200, 1000);

	cout << "재설정된 temp 출력\n";
	temp.show();

	return 0;
}