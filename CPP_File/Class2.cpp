#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> //strlen()�� ����ϱ� ����
#define SIZE 20

using namespace std;

/*
	<C++ ��ü���� ���α׷��� Ư¡>
	- ������ �ð��� �ƴ� ���� �ð��� ��� ������ ���� �� �ִ�
	- �迭�� ũ�⸦ ���� �ð� ����
*/

//����ü ����
struct MyStruct
{
	char name[20];
	int age;
};

int main() {
	/*
	c++�� ���� ���������� �����Ѵ�
	>> ��������Ǵ�� ���ο� ���������� ���� �� �ִ�
	���յ�������: �⺻ �������� �ε��Ҽ������� ����
	*/

	//�迭 array : ���� ���������� ��
	//typeName arrayName[arraySize];
	short month[12] = { 1,2,3 };

	cout << month[0] << endl; //�迭�� ù��° ��� ���

	/*
	<�迭���� ��>
	1. �ʱ�ȭ�� ���� ���� ���߿� �� �� ����
	2. �迭�� �ٸ� �迭�� ��°�� ������ �� ����
	3. �ʱ�ȭ �� ���� ������ ������ �������� ���� ������ �� ����
	4. �迭�� �κ������� �ʱ�ȭ�ϸ�, ������ ���ҵ��� ��� 0���� ����
	*/

	//���ڿ�
	char hello[] = "Hello"; //""��밡�� -> Hello��� ���ڿ� �ϼ�
	cout << hello << endl;


	//����� �Է�
	const int size = 15; //�迭�� ũ��� 15�� ����
	char name1[size]; //����ִ� �迭
	char name2[size] = "C++programing"; //���ڿ� ����� �ʱ�ȭ�� �迭

	cout << "�ȳ��ϼ��� ���� " << name2;
	cout << "�Դϴ�. ������ ��� �Ǽ���? \n";
	cin >> name1; //������̸� �Է� --> name1 �迭�� ����
	//cin.get(name1, size); --> �� �ٰ� ���� ���
	cout << name1 << "��, ����� �̸��� "; //name1�迭 ���
	cout << strlen(name1) << "�� �Դϴٸ�\n"; //name1�迭�� �Է��� ������ ����
	cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�\n";
	cout << name1[0] << "�ڷ� �����ϴ±���\n"; //name1�迭�� ù ��° ���
	name2[3] = '\0'; //name2�迭�� 4��° ���Ҹ� null�� ����
	cout << "�� �̸��� ù �� ���ڴ� ������ �����ϴ� " << name2 << endl;

	//string
	string str1;
	string str2 = "hong";
	str1 = str2; //string�� ���, ���ڿ��� ��°�� ���� ����
	cout << str1 << endl;

	//����ü: �ٸ� ���������� ���Ǵ� �������� ����

	//ex) �౸���� �����
	struct PlayerStruct {
		string name;
		string position;
		float height;
		float weight;
	};
	/*
	MyStruct A;
	A.name = "Son";
	A.position = "WingForward";
	A.height = 183.0;
	A.weight = 77.0;
	*/

	//ǥ��1
	PlayerStruct A {
		"son",
		"WingForward",
		183.0,
		77.0
	};

	//ǥ��2
	PlayerStruct B[2] = {
		{"Son", "LW", 183, 77},
		{"Kim", "CB", 190, 87}
	};
	cout << B[0].height << endl; //B����ü�� ù ��° �迭���� Ű ����ϱ�

	//����ü(union): ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����
	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};
	MyUnion test;
	test.intVal = 3;
	cout << test.intVal << endl; //int���� ���
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl; //float���� ���

	//����ü(enum): ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���
	enum spectrum {
		red, orenge, yellow, green,
		blue, violet, indigo, ultraviolet
	};
	/*
	1. spectrum�� ���ο� �������� �̸����� ����
	2. 0�������� 7���� ���� ���� ���� ��Ÿ���� ��ȣ ����� ��Ÿ�� 
	*/
	spectrum spectrumA = orenge;
	cout << spectrumA << endl; //orenge�� �ش��ϴ� ���� �� ���

	int colorB;
	colorB = blue; //b�� blue�� �ش��ϴ� ������ 4�̴�
	colorB = blue + 3;
	cout << colorB << endl; //��� -> 7


	// ������: ����� �ּҿ� �̸��� ���δ�
	// ��, �����ʹ� �������� �̸��� �ּҸ� ��Ÿ��

	/*
	int *a1; //c style
	int* b1; //c++ style
	*/
	int a = 6; //��
	int* b;	//��ġ(�ּ�)
	b = &a; //����a�� �ּҸ� ������ ���� b�� ����
	cout << "a�� �� " << a << endl;
	cout << "*b�� �� " << *b << endl;

	cout << "a�� �ּ� " << &a << endl;
	cout << "*b�� �ּ� " << b << endl;
	*b = *b + 1; //�ּ��� �� ��ȭ

	cout << "���� a�� ���� " << a << endl;

	//new������
	/*
	� ������	���������� ���ϴ��� new ���������� �˷��ָ�,
	new�����ڴ� �׿� �´� ũ���� �޸� ����� ã�Ƴ��� �� ����� �ּҸ� ����
	*/
	int* pointer = new int;

	//delete������ --> new�����ڸ� ����ϰ� ���� �ݵ�� �ʿ�
	/*
	����� �޸𸮸� �ٽ� �޸� ���� ȯ��,
	ȯ���� �޸𸮴� ���α׷��� �ٸ� �κ��� ���
	*/
	int* ps1 = new int;
	delete ps1;

	/*
	<������ ���� ���� ��>
	1. new�� �������� ���� �޸𸮴� delete�� ������ �� ����
	2. ���� �޸� ����� ���޾� �� �� delete�� ������ �� ����
	3. new[]�� ������ ���, delete[]�� �����Ѵ� (������� ���� ��쵵 ��������!)
	*/

	double* p3 = new double[3]; // double�� ������ 3���� ������ �� �ִ� ������ ���� 
	p3[0] = 0.2; // p3�� �迭 �̸�ó�� ���
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";

	p3 = p3 + 1; //������ ���� --> �迭�� ���� 1�� �մ��
	cout << "Now p3[0] is " << p3[0] << " and "; // p3[0] = 0.5
	cout << "p3[1] is " << p3[1] << "\n."; // p3[1] = 0.8

	p3 = p3 - 1; //�ٽ� ������ġ�� ����
	delete[] p3;//�迭 �޸� ����


	char animal[SIZE]; //ũ�Ⱑ 20�� �迭 ����
	char* ps; //������ ���� ����


	cout << "���� �̸��� �Է��Ͻʽÿ�.\n";
	cin >> animal;

	ps = new char[strlen(animal) + 1]; //new�����ڸ� ���� ����ڰ� �Է��� ���ڼ� + 1 ��ŭ ������ ������ ����
	strcpy(ps, animal); //���� ����

	cout << "�Է��Ͻ� ���� �̸��� �����Ͽ����ϴ�." << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << " �Դϴ�." << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�." << endl;

	delete[] ps;

	//���� ����ü ����
	//temp* ps = new temp;
	MyStruct* temp = new MyStruct;

	cout << "����� �̸��� �Է��Ͻʽÿ�.\n";
	cin >> temp->name;

	cout << "����� ���̸� �Է��Ͻʽÿ�.\n";
	cin >> (*temp).age;

	cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
	cout << "����� " << temp->age << "�� �̱���!\n";

	delete temp;

	return 0;
}