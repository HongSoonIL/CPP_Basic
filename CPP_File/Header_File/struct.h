#ifndef STRUCT 
// ifndef���� endif���� STRUCT�� ���� --> ��ȣ ���ȭ
// #define�� ���� ���ǵǾ� ���� ���� ������ ó����

#define STRUCT //STRUCT�� ��ȣ����μ� ����
#include <iostream>

using namespace std;

struct MyStruct
{
    string name;
    int age;
};

void display(MyStruct&);


#endif //