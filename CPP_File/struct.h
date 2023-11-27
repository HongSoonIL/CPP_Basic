#ifndef STRUCT 
// ifndef부터 endif까지 STRUCT로 묶임 --> 기호 상수화
// #define에 의해 정의되어 있지 않은 구문만 처리함

#define STRUCT //STRUCT를 기호상수로서 정의
#include <iostream>

using namespace std;

struct MyStruct
{
    string name;
    int age;
};

void display(MyStruct&);


#endif //